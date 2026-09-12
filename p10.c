#include <stdio.h>

int main()
{
    float dollars, rupees, pounds;

    printf("Enter dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;
    pounds = rupees / 70;

    printf("Pounds = %.2f", pounds);

    return 0;
}
