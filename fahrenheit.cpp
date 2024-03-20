#include <stdio.h>
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
double celsiusToFahrenheit(double celsius) 
{
    return (celsius * 9 / 5) + 32;
}
int main() 
{
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit is %.2f Celsius.\n", fahrenheit, celsius);
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f Celsius is %.2f Fahrenheit.\n", celsius, fahrenheit);
    return 0;
}
