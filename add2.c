#include <stdio.h>

addition() {
    float num1, num2, sum;

    // Input the two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Add the numbers
    sum = num1 + num2;

    // Output the result
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);

   // return 0;
}
