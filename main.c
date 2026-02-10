#include <stdio.h>
#include "converters.h"

void handleMeasureUnits();
void handleLength();

int main() {
    int   option;
    while (1) {
        printf("\n===========================\n");
        printf("    CONVERTER MAIN MENU      \n");
        printf("===========================\n");
        printf("1.  Measure Units\n");
        printf("2.  Currencies\n");
        printf("3.  Exit\n");
        
        printf("Select an option : ");
        if (scanf("%d", &option) != 1) {
            printf("\nInvalid input! Please enter a number (1-3) corresponding to one of the options.\n");
            while (getchar() != '\n');
            continue;
        }
        switch (option) {
            case 1 : handleMeasureUnits(); break;
            //case 2 : handleCurrency(); break;
            case 3 : printf("\nGoodbye!\n"); return 0;
            default: printf("\nOption not found! Please enter a number (1-3) corresponding to one of the options.\n");
        }
    }
}

void handleMeasureUnits() {
    int   subOption;
    while (1) {
        printf("\n>>> Measure Units <<<\n");
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
                case 1 : handleLength(); break; /*
                case 2 : handleMass(); break;
                case 3 : handleTemperature(); break;
                case 4 : handleTime(); break;
                case 5 : handleVolume(); break;*/
                default: printf("\nOption not found! Please enter a number (0-5) corresponding to one of the options.\n");
            }
    }
}

void handleLength() {
    int     unit;
    while (1) {
        printf("\n>>> Length Units <<<\n");
        printf("1. Millimeters\n");
        printf("2. Centimeters\n");
        printf("3. Meters\n");
        printf("4. Kilometers\n");
        printf("5. Inch (inches)\n");
        printf("6. Foot (feet)\n");
        printf("7. Yard\n");
        printf("8. Mile\n");
        printf("0. Back to Measure Units Menu\n");

        printf("Select an option : ");
            if (scanf("%d", &unit) != 1) {
                printf("\nInvalid input! Please enter a number (0-8) corresponding to one of the options.\n");
                while (getchar() != '\n');
                continue;
            }
            switch (unit) {
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