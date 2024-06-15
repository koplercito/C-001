#include <stdio.h>

main()
{
/*This is a float use for more precision at the time to convert the
temperature to decimals.*/
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
        printf(" Celsius \t Fahrenheit\n");
    while (celsius <= upper) {
        fahr = ((9.0/5.0 * celsius) + 32);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}