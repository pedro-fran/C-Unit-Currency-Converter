
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
Fetches real-time exchange rate data using the [Frankfurter API](https://www.frankfurter.app/).

* **Convert Currency:** Convert amounts between major world currencies (e.g., EUR to USD, GBP to JPY).
* **List Currencies:** View a list of all supported currency codes.

## Prerequisites

To compile and run this project, you need a C compiler and the **libcurl** library installed in your system.


### Installing libcurl

**Debian / Ubuntu:**
```bash
sudo apt install libcurl4-openssl-dev
```

**Fedora:**
```bash
dnf install curl
``` 

**macOS (using Homebrew):**
```bash
brew install curl
```

### Compilation

Open your terminal in the project directory. Run the following command to compile all source files and link the `curl` library:

```bash
gcc main.c converters.c currency.c -o converter -lcurl
```