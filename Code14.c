#include <stdio.h>
int main() {
    float cgpa;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    if (cgpa >= 4.0) 
        printf("Excellent!\n");
    else if (cgpa >= 3.5) 
        printf("Very Good\n");
    else if (cgpa >= 3.0) 
        printf("Good\n");
    else if (cgpa >= 2.5) 
        printf("Average\n");
    else 
        printf("Needs Improvement\n");
    return 0;
}
