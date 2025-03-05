#include <stdio.h>

void factorial() {
    int num;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Output the result
        printf("Factorial of %d is %llu\n", num, factorial);
    }

    //return 0;
}
