#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Greatest number: %d\n", max);
    return 0;
}
