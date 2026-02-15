
# CLI Unit & Currency Converter

C-based Command Line Interface (CLI) application that allows users to perform various unit conversions and check real-time currency exchange rates.

## Features

Menu-driven interface to handle two main categories of conversion:

### 1. Measure Units (Offline)

Perform instant mathematical conversions across various metric and imperial systems. The program calculates all related units simultaneously for the input provided.

* **Length:** Millimeters, Centimeters, Meters, Kilometers, Inches, Feet, Yards, Miles.
* **Mass:** Milligrams, Grams, Kilograms, Ounces, Pounds, Tons.
* **Temperature:** Celsius, Fahrenheit, Kelvin.
* **Time:** Seconds, Minutes, Hours, Days, Months, Years.
* **Volume:** Milliliters, Liters, Cubic Meters, Gallons, Quarts, Pints, Cups, Fluid Ounces.

### 2. Currency Converter (Online)

Fetches real-time exchange rate data using the [Frankfurter API](https://www.frankfurter.app/), internet connection is needed.

* **Convert Currency:** Convert amounts between major world currencies (e.g., EUR to USD, GBP to JPY).
* **List Currencies:** View a list of all supported currency codes.

## Prerequisites

To compile and run this project, you need a **C compiler** (GCC recommended) and the **libcurl** development library installed in your system.


### Installing libcurl

**Debian / Ubuntu:**
```bash
sudo apt install libcurl4-openssl-dev
```

**Fedora / RedHat:**
```bash
dnf install curl
``` 

**macOS (using Homebrew):**
```bash
brew install curl
```

**Windows:**
* Recommended: **WSL** (use Linux instructions).
* Native MinGW: download curl binaries and configure include/lib paths manually.

### Compilation

Open your terminal in the project directory. Run the following command to compile all source files and link the `curl` library:

```bash
gcc main.c converters.c currency.c -o converter -lcurl
```

### Usage

Run the program

```bash
./converter
```

## Navigation

### **Main Menu:**

* `1` -> Measure Units
* `2` -> Currencies
* `0` -> Exit program

### **Unit Conversion Example:**

1. Select **Measure Units** in Main Menu;
2. Select type of Unit (e.g., `Temperature`) in sub-menu;
3. Select base Unit for all conversions (e.g., `Celsius`);
4. Enter value for conversion (e.g., `25.5`).

The program prints the converted value in **all other units** of that category.

### **Currency Conversion Example:**

1. Select **Currencies** in Main Menu;
2. Select **Convert Currency** in sub-menu;
3. Enter Source Currency (e.g., `EUR`);
4. Enter Target Currency (e.g., `USD`);
5. Enter Amount for conversion (e.g.,  `125.5`).

The program fetches **live data** and prints the result.

## License

This project is open-source. You are free to modify, improve, and distribute it.