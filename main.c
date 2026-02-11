#include <stdio.h>
#include "converters.h"

void handleMeasureUnits();
void handleLength(); 
void handleMass();
void handleTemperature();
void handleTime();
void handleVolume();

int main() {
    int option;
    while (1) {
        printf("\n=================================\n");
        printf("    ~> CONVERTER MAIN MENU <~      \n");
        printf("=================================\n");
        printf("1.  Measure Units\n");
        printf("2.  Currencies\n");
        printf("0.  Exit\n");
        
        printf("Select an option : ");
        if (scanf("%d", &option) != 1) {
            printf("\nInvalid input! Please enter a number (0-2) corresponding to one of the options.\n");
            while (getchar() != '\n');
            continue;
        }
        switch (option) {
            case 0 : printf("\nGoodbye!\n"); return 0;
            case 1 : handleMeasureUnits(); break;
            //case 2 : handleCurrency(); break;
            default: printf("\nOption not found! Please enter a number (0-2) corresponding to one of the options.\n");
        }
    }
}

void handleMeasureUnits() {
    int subOption;
    while (1) {
        printf("\n-------------------------------\n");
        printf("     >>> Measure Units <<<\n");
        printf("-------------------------------\n");
        
        printf("1. Length\n");
        printf("2. Mass\n");
        printf("3. Temperature\n");
        printf("4. Time\n");
        printf("5. Volume\n");
        printf("0. Back to Main Menu\n");

        printf("Select an option : ");
            if (scanf("%d", &subOption) != 1) {
                printf("\nInvalid input! Please enter a number (0-5) corresponding to one of the options.\n");
                while (getchar() != '\n');
                continue;
            }
            switch (subOption) {
                case 0 : return; break; 
                case 1 : handleLength(); break; 
                case 2 : handleMass(); break;
                case 3 : handleTemperature(); break; 
                case 4 : handleTime(); break; /*/
                case 5 : handleVolume(); break;*/
                default: printf("\nOption not found! Please enter a number (0-5) corresponding to one of the options.\n");
            }
    }
}

void handleLength() {
    int lenOption;
    while (1) {
        printf("\n>>> Length Units <<<\n");
        printf("1. Millimeters\n");
        printf("2. Centimeters\n");
        printf("3. Meters\n");
        printf("4. Kilometers\n");
        printf("5. Inch (inches)\n");
        printf("6. Foot (feet)\n");
        printf("7. Yards\n");
        printf("8. Miles\n");
        printf("0. Back to Measure Units Menu\n");

        printf("Select an option : ");
            if (scanf("%d", &lenOption) != 1) {
                printf("\nInvalid input! Please enter a number (0-8) corresponding to one of the options.\n");
                while (getchar() != '\n');
                continue;
            }
            switch (lenOption) {
                case 0 : return; break;
                case 1 : convertMillimeters(); break;
                case 2 : convertCentimeters(); break;
                case 3 : convertMeters(); break;
                case 4 : convertKilometers(); break;
                case 5 : convertInches(); break;
                case 6 : convertFeet(); break;
                case 7 : convertYards(); break;
                case 8 : convertMiles(); break;
                default: printf("\nOption not found! Please enter a number (0-8) corresponding to one of the options.\n");
            }
    }
}

void handleMass() {
    int massOption;
    while (1) {    
        printf("\n>>> Mass Units <<<\n");
        printf("1. Milligrams\n");
        printf("2. Grams\n");
        printf("3. Kilograms\n");
        printf("4. Ounces\n");
        printf("5. Pounds\n");
        printf("6. Tons\n");
        printf("0. Back to Measure Units Menu\n");

        printf("Select an option : ");
            if (scanf("%d", &massOption) != 1) {
                printf("\nInvalid input! Please enter a number (0-6) corresponding to one of the options.\n");
                while (getchar() != '\n');
                continue;
            }
            switch (massOption) {
                case 0 : return; break;
                case 1 : convertMilligrams(); break;
                case 2 : convertGrams(); break;
                case 3 : convertKilograms(); break;
                case 4 : convertOunces(); break;
                case 5 : convertPounds(); break;
                case 6 : convertTons(); break;
                default: printf("\nOption not found! Please enter a number (0-6) corresponding to one of the options.\n");
            }
    }
}

void handleTemperature() {
    int tempOption;
    while(1) {
        printf("\n>>> Temperature Units <<<\n");
        printf("1. Celsius\n");
        printf("2. Fahrenheit\n");
        printf("3. Kelvin\n");
        printf("0. Back to Measure Units Menu\n");

        printf("Select an option : ");
            if (scanf("%d", &tempOption) != 1) {
                printf("\nInvalid input! Please enter a number (0-3) corresponding to one of the options.\n");
                while (getchar() != '\n');
                continue;
            }
            switch (tempOption) {
                case 0 : return; break;
                case 1 : convertCelsius(); break;
                case 2 : convertFahrenheit(); break;
                case 3 : convertKelvin(); break;
                default: printf("\nOption not found! Please enter a number (0-3) corresponding to one of the options.\n");
            }
    }
}

void handleTime() {
    int timeOption;
    while(1) {
        printf("\n>>> Time Units <<<\n");
        printf("1. Seconds\n");
        printf("2. Minutes\n");
        printf("3. Hours\n");
        printf("4. Days\n");
        printf("5. Months\n");
        printf("6. Years\n");
        printf("0. Back to Measure Units Menu\n");

        printf("Select an option : ");
            if (scanf("%d", &timeOption) != 1) {
                printf("\nInvalid input! Please enter a number (0-6) corresponding to one of the options.\n");
                while (getchar() != '\n');
                continue;
            }
            switch (timeOption) {
                case 0 : return; break;
                case 1 : convertSeconds(); break; 
                case 2 : convertMinutes(); break;
                case 3 : convertHours(); break;
                case 4 : convertDays(); break;
                case 5 : convertMonths(); break;
                case 6 : convertYears(); break; 
                default: printf("\nOption not found! Please enter a number (0-6) corresponding to one of the options.\n");
            }
    }
}

void handleVolume() {
    int volOption;
    while(1) {
        printf("\n>>> Volume Units <<<\n");
        printf("1. Milliliters\n");
        printf("2. Liters\n");
        printf("3. Cubic Meters\n");
        printf("4. Gallons\n");
        printf("5. Quarts\n");
        printf("6. Pints\n");
        printf("7. Cups\n");
        printf("8. Fluid Ounces\n");
        printf("0. Back to Measure Units Menu\n");   
        
        printf("Select an option : ");
            if (scanf("%d", &volOption) != 1) {
                printf("\nInvalid input! Please enter a number (0-8) corresponding to one of the options.\n");
                while (getchar() != '\n');
                continue;
            }
            switch (volOption) {
                case 0 : return; break;
                case 1 : convertMilliliters(); break; 
                case 2 : convertLiters(); break;
                case 3 : convertCubicMeters(); break;
                case 4 : convertGallons(); break;
                case 5 : convertQuarts(); break;
                case 6 : convertPints(); break;
                case 7 : convertCups(); break;
                case 8 : convertFluidOunces(); break; 
                default: printf("\nOption not found! Please enter a number (0-8) corresponding to one of the options.\n");
            }
    }
}   