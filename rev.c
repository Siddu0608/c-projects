#include <stdio.h>
#include <string.h>

void reverse () {
    char str[100], reversedStr[100];
    int length, i, j;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets to get input, handles spaces.

    // Remove the newline character at the end, if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    // Reverse the string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i];
    }
    reversedStr[j] = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", reversedStr);

   // return 0;
}
