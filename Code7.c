#include <stdio.h>
int main() {
    float inch, cm;

    printf("Enter value in inches: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("Centimeters: %.2f\n", cm);

    printf("Enter value in cm: ");
    scanf("%f", &cm);
    inch = cm / 2.54;
    printf("Inches: %.2f\n", inch);

    return 0;
}
