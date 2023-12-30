#include <iostream>
using namespace std;


int convertToFahrenheit(int degreeCelsius)
{
    cin >> degreeCelsius;
    int conversion {(degreeCelsius * 9/5) + 32};

    return conversion;
}



int convertToCelsius (int degreeFahrenheit)
{
    cin >> degreeFahrenheit;
    int conversion {(degreeFahrenheit - 32) * 5/9};

    return conversion;
}



int main()
{
    cout << "Enter a degree Celsius to convert to Fahrenheit: ";
    int degreeCelsius {};
    cout << convertToFahrenheit(degreeCelsius) << '\n';

    cout << "Enter a degree Fahrenheit to convert Celsius: ";
    int degreeFahrenheit {};
    cout << convertToCelsius(degreeFahrenheit) << '\n';


    return 0;
}
