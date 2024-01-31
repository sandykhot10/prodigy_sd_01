#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

int main() {
    double temperature;
    char originalUnit;

    cout << "Temperature Conversion Program" << endl;
    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "Enter the original unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> originalUnit;

    double convertedCelsius, convertedFahrenheit, convertedKelvin;

    switch (originalUnit) {
        case 'C':
        case 'c':
            convertedCelsius = temperature;
            convertedFahrenheit = celsiusToFahrenheit(temperature);
            convertedKelvin = celsiusToKelvin(temperature);
            break;
        case 'F':
        case 'f':
            convertedCelsius = (temperature - 32) * 5.0 / 9.0;
            convertedFahrenheit = temperature;
            convertedKelvin = celsiusToKelvin(convertedCelsius);
            break;
        case 'K':
        case 'k':
            convertedCelsius = temperature - 273.15;
            convertedFahrenheit = celsiusToFahrenheit(convertedCelsius);
            convertedKelvin = temperature;
            break;
        default:
            cout << "Invalid unit. Please enter C, F, or K." << endl;
            return 1;
    }

    cout << "Converted Temperatures:" << endl;
    cout << "Celsius: " << convertedCelsius << " degrees Celsius" << endl;
    cout << "Fahrenheit: " << convertedFahrenheit << " degrees Fahrenheit" << endl;
    cout << "Kelvin: " << convertedKelvin << " Kelvin" << endl;

    return 0;
}
