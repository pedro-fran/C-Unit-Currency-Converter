#include <stdio.h>
#include "converters.h"

// --- Length Converters ---

void convertMillimeters() {
    float mm;
    printf("Enter Millimeters: ");
    scanf("%f", &mm);

    printf("\nConversions from %g mm:\n", mm);
    printf("    Centimeters: %10.8g cm\n", mm / 10.0f);  
    printf("         Meters: %10.8g m\n", mm / 1000.0f);
    printf("     Kilometers: %10.8g km\n", mm / 1e6);        
    printf("         Inches: %10.8g in\n", mm / 25.4f);
    printf("           Feet: %10.8g ft\n", mm / 304.8f);
    printf("          Yards: %10.8g yd\n", mm / 914.4f);
    printf("          Miles: %10.8g mi\n", mm / 1.609e6);
}

void convertCentimeters() {
    float cm;
    printf("Enter Centimeters: ");
    scanf("%f", &cm);

    printf("\nConversions from %g cm:\n", cm);
    printf("    Millimeters: %10.8g mm\n", cm * 10.0f);  
    printf("         Meters: %10.8g m\n", cm / 100.0f);
    printf("     Kilometers: %10.8g km\n", cm / 1e5);        
    printf("         Inches: %10.8g in\n", cm / 2.54f);
    printf("           Feet: %10.8g ft\n", cm / 30.48f);
    printf("          Yards: %10.8g yd\n", cm / 91.44f);
    printf("          Miles: %10.8g mi\n", cm / 1.609e5);
}

void convertMeters() {
    float m;
    printf("Enter Meters: ");
    scanf("%f", &m);

    printf("\nConversions from %g m:\n", m);
    printf("    Millimeters: %10.8g mm\n", m * 1000.0f);  
    printf("    Centimeters: %10.8g cm\n", m * 100.0f);
    printf("     Kilometers: %10.8g km\n", m / 1000.0f);        
    printf("         Inches: %10.8g in\n", m / 0.0254f);
    printf("           Feet: %10.8g ft\n", m / 0.3048f);
    printf("          Yards: %10.8g yd\n", m / 0.9144f);
    printf("          Miles: %10.8g mi\n", m / 1609.344f);
}

void convertKilometers() {
    float km;
    printf("Enter Kilometers: ");
    scanf("%f", &km);

    printf("\nConversions from %g km:\n", km);
    printf("    Millimeters: %10.8g mm\n", km * 1e6);  
    printf("    Centimeters: %10.8g cm\n", km * 1e5);
    printf("         Meters: %10.8g m\n", km * 1000.0f);        
    printf("         Inches: %10.8g in\n", km / 0.0000254f);
    printf("           Feet: %10.8g ft\n", km / 0.0003048f);
    printf("          Yards: %10.8g yd\n", km / 0.0009144f);
    printf("          Miles: %10.8g mi\n", km / 1.609344f);
}

void convertInches() {
    float in;
    printf("Enter Inches: ");
    scanf("%f", &in);

    printf("\nConversions from %g inches:\n", in);
    printf("    Millimeters: %10.8g mm\n", in * 25.4f);  
    printf("    Centimeters: %10.8g cm\n", in * 2.54f);
    printf("         Meters: %10.8g m\n", in * 0.0254f);        
    printf("     Kilometers: %10.8g km\n", in * 0.0000254f);
    printf("           Feet: %10.8g ft\n", in / 12.0f);
    printf("          Yards: %10.8g yd\n", in / 36.0f);
    printf("          Miles: %10.8g mi\n", in / 63360.0f);
}

void convertFeet() {
    float ft;
    printf("Enter Feet: ");
    scanf("%f", &ft);

    printf("\nConversions from %g feet:\n", ft);
    printf("    Millimeters: %10.8g mm\n", ft * 304.8f);  
    printf("    Centimeters: %10.8g cm\n", ft * 30.48f);
    printf("         Meters: %10.8g m\n", ft * 0.3048f);        
    printf("     Kilometers: %10.8g km\n", ft * 0.0003048f);
    printf("         Inches: %10.8g in\n", ft * 12.0f);
    printf("          Yards: %10.8g yd\n", ft / 3.0f);
    printf("          Miles: %10.8g mi\n", ft / 5280.0f);
}

void convertYards() {
    float yd;
    printf("Enter Yards: ");
    scanf("%f", &yd);

    printf("\nConversions from %g yards:\n", yd);
    printf("    Millimeters: %10.8g mm\n", yd * 914.4f);  
    printf("    Centimeters: %10.8g cm\n", yd * 91.44f);
    printf("         Meters: %10.8g m\n", yd * 0.9144f);        
    printf("     Kilometers: %10.8g km\n", yd * 0.0009144f);
    printf("         Inches: %10.8g in\n", yd * 36.0f);
    printf("           Feet: %10.8g ft\n", yd * 3.0f);
    printf("          Miles: %10.8g mi\n", yd / 1760.0f);
}

void convertMiles() {
    float mi;
    printf("Enter Miles: ");
    scanf("%f", &mi);

    printf("\nConversions from %g miles:\n", mi);
    printf("    Millimeters: %10.8g mm\n", mi * 1.609e6);  
    printf("    Centimeters: %10.8g cm\n", mi * 1.609e5);
    printf("         Meters: %10.8g m\n", mi * 1609.344f);        
    printf("     Kilometers: %10.8g km\n", mi * 1.609344f);
    printf("         Inches: %10.8g in\n", mi * 63360.0f);
    printf("           Feet: %10.8g ft\n", mi * 5280.0f);
    printf("          Yards: %10.8g yd\n", mi * 1760.0f);
}

// --- Mass Converters ---

void convertMilligrams() {
    float mg;
    printf("Enter Milligrams: ");
    scanf("%f", &mg);

    printf("\nConversions from %g mg:\n", mg);
    printf("          Grams: %10.8g g\n", mg / 1000.0f);  
    printf("      Kilograms: %10.8g kg\n", mg / 1e6);        
    printf("         Ounces: %10.8g oz\n", mg / 28349.5f);
    printf("         Pounds: %10.8g lb\n", mg / 453592.37f);
    printf("           Tons: %10.8g tons\n", mg / 907184740.0f);
}

void convertGrams() {
    float g;
    printf("Enter Grams: ");
    scanf("%f", &g);

    printf("\nConversions from %g g:\n", g);
    printf("     Milligrams: %10.8g mg\n", g * 1000.0f);  
    printf("      Kilograms: %10.8g kg\n", g / 1000.0f);        
    printf("         Ounces: %10.8g oz\n", g / 28.3495f);
    printf("         Pounds: %10.8g lb\n", g / 453.59237f);
    printf("           Tons: %10.8g tons\n", g / 907184.74f);
}

void convertKilograms() {
    float kg;
    printf("Enter Kilograms: ");
    scanf("%f", &kg);

    printf("\nConversions from %g kg:\n", kg);
    printf("     Milligrams: %10.8g mg\n", kg * 1e6);  
    printf("          Grams: %10.8g g\n", kg * 1000.0f);        
    printf("         Ounces: %10.8g oz\n", kg * 35.274f);
    printf("         Pounds: %10.8g lb\n", kg * 2.20462f);
    printf("           Tons: %10.8g tons\n", kg / 907.18474f);
}

void convertOunces() {
    float oz;
    printf("Enter Ounces: ");
    scanf("%f", &oz);

    printf("\nConversions from %g ounces:\n", oz);
    printf("     Milligrams: %10.8g mg\n", oz * 28349.5f);  
    printf("          Grams: %10.8g g\n", oz * 28.3495f);        
    printf("      Kilograms: %10.8g kg\n", oz / 35.274f);
    printf("         Pounds: %10.8g lb\n", oz / 16.0f);
    printf("           Tons: %10.8g tons\n", oz / 32000.0f);
}

void convertPounds() {
    float lb;
    printf("Enter Pounds: ");
    scanf("%f", &lb);

    printf("\nConversions from %g pounds:\n", lb);
    printf("     Milligrams: %10.8g mg\n", lb * 453592.37f);  
    printf("          Grams: %10.8g g\n", lb * 453.59237f);        
    printf("      Kilograms: %10.8g kg\n", lb / 2.20462f);
    printf("         Ounces: %10.8g oz\n", lb * 16.0f);
    printf("           Tons: %10.8g tons\n", lb / 2000.0f);
}

void convertTons() {
    float t;
    printf("Enter Tons: ");
    scanf("%f", &t);

    printf("\nConversions from %g tons:\n", t);
    printf("     Milligrams: %10.8g mg\n", t * 907184740.0f);  
    printf("          Grams: %10.8g g\n", t * 907184.74f);        
    printf("      Kilograms: %10.8g kg\n", t * 907.18474f);
    printf("         Ounces: %10.8g oz\n", t * 32000.0f);
    printf("         Pounds: %10.8g lb\n", t * 2000.0f);
}

// --- Temperature Converters ---

void convertCelsius() {
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);

    printf("\nConversions from %g °C:\n", c);
    printf("     Fahrenheit: %.2f ºF\n", (c * 9.0f / 5.0f) + 32.0f);  
    printf("         Kelvin: %.2f K\n", c + 273.15f);        
}

void convertFahrenheit() {
    float f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);

    printf("\nConversions from %g °F:\n", f);
    printf("         Celsius: %.2f °C\n", (f - 32.0f) * 5.0f / 9.0f);  
    printf("         Kelvin: %.2f K\n", (f - 32.0f) * 5.0f / 9.0f + 273.15f);        
}

void convertKelvin() {
    float k;
    printf("Enter Kelvin: ");
    scanf("%f", &k);

    printf("\nConversions from %g K:\n", k);
    printf("        Celsius: %.2f °C\n", k - 273.15f);  
    printf("     Fahrenheit: %.2f ºF\n", (k - 273.15f) * 9.0f / 5.0f + 32.0f);        
}

// --- Time Converters ---

void convertSeconds() {
    float s;
    printf("Enter Seconds: ");
    scanf("%f", &s);

    printf("\nConversions from %g seconds:\n", s);
    printf("        Minutes: %.2f min\n", s / 60.0f);  
    printf("          Hours: %.2f hr\n", s / (60.0f * 60.0f));        
    printf("           Days: %.2f days\n", s / (60.0f * 60.0f * 24.0f));
    printf("         Months: %.2f months\n", s / (60.0f * 60.0f * 24.0f * 30.0f));
    printf("          Years: %.2f years\n", s / (60.0f * 60.0f * 24.0f * 365.0f));
}

void convertMinutes() {
    float min;
    printf("Enter Minutes: ");
    scanf("%f", &min);

    printf("\nConversions from %g minutes:\n", min);
    printf("        Seconds: %.2f s\n", min * 60.0f);  
    printf("          Hours: %.2f hr\n", min / 60.0f);        
    printf("           Days: %.2f days\n", min / (60.0f * 24.0f));
    printf("         Months: %.2f months\n", min / (60.0f * 24.0f * 30.0f));
    printf("          Years: %.2f years\n", min / (60.0f * 24.0f * 365.0f));
}

void convertHours() {
    float hr;
    printf("Enter Hours: ");
    scanf("%f", &hr);

    printf("\nConversions from %g hours:\n", hr);
    printf("        Seconds: %.2f s\n", hr * (60.0f * 60.0f));  
    printf("        Minutes: %.2f min\n", hr * 60.0f);        
    printf("           Days: %.2f days\n", hr / 24.0f);
    printf("         Months: %.2f months\n", hr / (24.0f * 30.0f));
    printf("          Years: %.2f years\n", hr / (24.0f * 365.0f));
}

void convertDays() {
    float days;
    printf("Enter Days: ");
    scanf("%f", &days);

    printf("\nConversions from %g days:\n", days);
    printf("        Seconds: %.2f s\n", days * (60.0f * 60.0f * 24.0f));  
    printf("        Minutes: %.2f min\n", days * (60.0f * 24.0f));        
    printf("          Hours: %.2f hr\n", days * 24.0f);
    printf("         Months: %.2f months\n", days / 30.0f);
    printf("          Years: %.2f years\n", days / 365.0f);
}

void convertMonths() {
    float months;
    printf("Enter Months: ");
    scanf("%f", &months);

    printf("\nConversions from %g months:\n", months);
    printf("        Seconds: %.2f s\n", months * (60.0f * 60.0f * 24.0f * 30.0f));  
    printf("        Minutes: %.2f min\n", months * (60.0f * 24.0f * 30.0f));        
    printf("          Hours: %.2f hr\n", months * (24.0f * 30.0f));
    printf("           Days: %.2f days\n", months * 30.0f);
    printf("          Years: %.2f years\n", months / 12.0f);
}

void convertYears() {
    float years;
    printf("Enter Years: ");
    scanf("%f", &years);

    printf("\nConversions from %g years:\n", years);
    printf("        Seconds: %.2f s\n", years * (60.0f * 60.0f * 24.0f * 365.0f));  
    printf("        Minutes: %.2f min\n", years * (60.0f * 24.0f * 365.0f));        
    printf("          Hours: %.2f hr\n", years * (24.0f * 365.0f));
    printf("           Days: %.2f days\n", years * 365.0f);
    printf("         Months: %.2f months\n", years * 12.0f);
}

// --- Volume Converters ---

void convertMilliliters() {
    float ml;
    printf("Enter Milliliters: ");
    scanf("%f", &ml);

    printf("\nConversions from %g ml:\n", ml);
    printf("         Liters: %10.8g L\n", ml / 1000.0f);  
    printf("   Cubic Meters: %10.8g m³\n", ml / 1e6);        
    printf("        Gallons: %10.8g gal\n", ml / 3785.41f);
    printf("         Quarts: %10.8g qt\n", ml / 946.353f);
    printf("          Pints: %10.8g pt\n", ml / 473.176f);
    printf("           Cups: %10.8g cups\n", ml / 240.0f);
    printf("   Fluid Ounces: %10.8g fl oz\n", ml / 29.5735f);
}

void convertLiters() {
    float L;
    printf("Enter Liters: ");
    scanf("%f", &L);

    printf("\nConversions from %g L:\n", L);
    printf("    Milliliters: %10.8g ml\n", L * 1000.0f);  
    printf("   Cubic Meters: %10.8g m³\n", L / 1000.0f);        
    printf("        Gallons: %10.8g gal\n", L / 3.78541f);
    printf("         Quarts: %10.8g qt\n", L / 0.946353f);
    printf("          Pints: %10.8g pt\n", L / 0.473176f);
    printf("           Cups: %10.8g cups\n", L / 0.24f);
    printf("   Fluid Ounces: %10.8g fl oz\n", L / 0.0295735f);
}

void convertCubicMeters() {
    float m3;
    printf("Enter Cubic Meters: ");
    scanf("%f", &m3);

    printf("\nConversions from %g m³:\n", m3);
    printf("    Milliliters: %10.8g ml\n", m3 * 1e6);  
    printf("         Liters: %10.8g L\n", m3 * 1000.0f);        
    printf("        Gallons: %10.8g gal\n", m3 / 0.00378541f);
    printf("         Quarts: %10.8g qt\n", m3 / 0.000946353f);
    printf("          Pints: %10.8g pt\n", m3 / 0.000473176f);
    printf("           Cups: %10.8g cups\n", m3 / 0.00024f);
    printf("   Fluid Ounces: %10.8g fl oz\n", m3 / 0.0000295735f);
}

void convertGallons() {
    float gal;
    printf("Enter Gallons: ");
    scanf("%f", &gal);

    printf("\nConversions from %g gallons:\n", gal);
    printf("    Milliliters: %10.8g ml\n", gal * 3785.41f);  
    printf("         Liters: %10.8g L\n", gal * 3.78541f);        
    printf("   Cubic Meters: %10.8g m³\n", gal * 0.00378541f);
    printf("         Quarts: %10.8g qt\n", gal * 4.0f);
    printf("          Pints: %10.8g pt\n", gal * 8.0f);
    printf("           Cups: %10.8g cups\n", gal * 16.0f);
    printf("   Fluid Ounces: %10.8g fl oz\n", gal * 128.0f);
}

void convertQuarts() {
    float qt;
    printf("Enter Quarts: ");
    scanf("%f", &qt);

    printf("\nConversions from %g quarts:\n", qt);
    printf("    Milliliters: %10.8g ml\n", qt * 946.353f);  
    printf("         Liters: %10.8g L\n", qt * 0.946353f);        
    printf("   Cubic Meters: %10.8g m³\n", qt * 0.000946353f);
    printf("        Gallons: %10.8g gal\n", qt / 4.0f);
    printf("          Pints: %10.8g pt\n", qt * 2.0f);
    printf("           Cups: %10.8g cups\n", qt * 4.0f);
    printf("   Fluid Ounces: %10.8g fl oz\n", qt * 32.0f);
}

void convertPints() {
    float pt;
    printf("Enter Pints: ");
    scanf("%f", &pt);

    printf("\nConversions from %g pints:\n", pt);
    printf("    Milliliters: %10.8g ml\n", pt * 473.176f);  
    printf("         Liters: %10.8g L\n", pt * 0.473176f);        
    printf("   Cubic Meters: %10.8g m³\n", pt * 0.000473176f);
    printf("        Gallons: %10.8g gal\n", pt / 8.0f);
    printf("         Quarts: %10.8g qt\n", pt / 2.0f);
    printf("           Cups: %10.8g cups\n", pt * 2.0f);
    printf("   Fluid Ounces: %10.8g fl oz\n", pt * 16.0f);
}

void convertCups() {
    float cups;
    printf("Enter Cups: ");
    scanf("%f", &cups);

    printf("\nConversions from %g cups:\n", cups);
    printf("    Milliliters: %10.8g ml\n", cups * 240.0f);  
    printf("         Liters: %10.8g L\n", cups * 0.24f);        
    printf("   Cubic Meters: %10.8g m³\n", cups * 0.00024f);
    printf("        Gallons: %10.8g gal\n", cups / 16.0f);
    printf("         Quarts: %10.8g qt\n", cups / 4.0f);
    printf("          Pints: %10.8g pt\n", cups / 2.0f);
    printf("   Fluid Ounces: %10.8g fl oz\n", cups * 8.0f);
}

void convertFluidOunces() {
    float fl_oz;
    printf("Enter Fluid Ounces: ");
    scanf("%f", &fl_oz);

    printf("\nConversions from %g fluid ounces:\n", fl_oz);
    printf("    Milliliters: %10.8g ml\n", fl_oz * 29.5735f);  
    printf("         Liters: %10.8g L\n", fl_oz * 0.0295735f);        
    printf("   Cubic Meters: %10.8g m³\n", fl_oz * 0.0000295735f);
    printf("        Gallons: %10.8g gal\n", fl_oz / 128.0f);
    printf("         Quarts: %10.8g qt\n", fl_oz / 32.0f);
    printf("          Pints: %10.8g pt\n", fl_oz / 16.0f);
    printf("           Cups: %10.8g cups\n", fl_oz / 8.0f);
}