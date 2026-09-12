#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("Celsius = %.2f", celsius);

    return 0;
}
