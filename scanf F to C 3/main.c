#include <stdio.h>

int main() {
    float start, end, increment, fahrenheit, celsius;

    // Accepting input from the user
    printf("Enter the starting value in Fahrenheit: ");
    scanf("%f", &start);
    printf("Enter the ending value in Fahrenheit: ");
    scanf("%f", &end);
    printf("Enter the increment value: ");
    scanf("%f", &increment);

    // Printing table header
    printf("A table showing the conversion of Fahrenheit to Celcius\n");
    printf("\nFahrenheit\tCelsius\n");
    printf("--------------------------\n");

    // Loop to generate the conversion table
    for (fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%8.2f\t%8.2f\n", fahrenheit, celsius);
    }

    return 0;
}
