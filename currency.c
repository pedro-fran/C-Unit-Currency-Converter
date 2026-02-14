#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <curl/curl.h>

struct MemoryStruct {
  char *memory;
  size_t size;  
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
  size_t realsize = size * nmemb;
  struct MemoryStruct *mem = (struct MemoryStruct *)userp;
 
  char *ptr = realloc(mem->memory, mem->size + realsize + 1);
  if (ptr == NULL) {
    printf("Not enough memory (realloc returned NULL)\n");
    return 0;
  }
 
  mem->memory = ptr;
  memcpy(&(mem->memory[mem->size]), contents, realsize);
  mem->size += realsize;
  mem->memory[mem->size] = 0;

  return realsize;
}

double extractRate(const char *json, const char *currency) {
  char key[16]; 
  sprintf(key, "\"%s\":", currency); 
  
  char *pos = strstr(json, key); 
  if (!pos) return -1; 
  
  pos += strlen(key); 
  
  return strtod(pos, NULL); 
}

void toUpperStr(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int convertCurrency() {
  char from[4], to[4];
  double amount; 
  
  printf("From currency (e.g., EUR): "); 
  scanf("%3s", from); 
  toUpperStr(from);
  
  printf("To currency (e.g., USD): "); 
  scanf("%3s", to); 
  toUpperStr(to);
  
  printf("Amount: "); 
  scanf("%lf", &amount); 
  
  char url[256]; 
  sprintf(url, "https://api.frankfurter.app/latest?from=%s&to=%s", from, to );
  
  CURL *curl;
  CURLcode result;

  struct MemoryStruct chunk;
  chunk.memory = malloc(1);  
  chunk.size = 0;           

  curl = curl_easy_init();
  if (curl == NULL) {
      fprintf(stderr, "HTTP request failed\n");
      return -1;
  }

  curl_easy_setopt(curl, CURLOPT_URL, url);
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
  
  result = curl_easy_perform(curl);
  
  if (result != CURLE_OK) {
      fprintf(stderr, "Error: %s\n", curl_easy_strerror(result));
      free(chunk.memory);
      return -1;
  }

  double rate = extractRate(chunk.memory, to);

  if (rate < 0) {
    printf("Could not find rate for %s\n", to);
  } else { 
    printf("\n%g %s = %g %s\n", amount, from, amount * rate, to ); 
  }

  free(chunk.memory);
  curl_easy_cleanup(curl);
  
  return 0;
}

void listCurrencies() {
    CURL *curl;
    CURLcode result;

    struct MemoryStruct chunk;
    chunk.memory = malloc(1);
    chunk.size = 0;

    curl = curl_easy_init();
    if (!curl) {
        printf("Curl init failed\n");
        return;
    }

    curl_easy_setopt(curl, CURLOPT_URL, "https://api.frankfurter.app/currencies");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);

    result = curl_easy_perform(curl);

    if (result != CURLE_OK) {
        printf("Error: %s\n", curl_easy_strerror(result));
        curl_easy_cleanup(curl);
        free(chunk.memory);
        return;
    }

    printf("\nAvailable currencies:\n");

    char *json = chunk.memory; 
    char *key = strtok(json, "{\":,}"); 
    while (key != NULL) { 
      char *value = strtok(NULL, "{\":,}"); 
      if (value != NULL) 
        printf("%s - %s\n", key, value); 
      key = strtok(NULL, "{\":,}"); 
    }

    free(chunk.memory);
    curl_easy_cleanup(curl);
}
