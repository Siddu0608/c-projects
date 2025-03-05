#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pallindrome() {
    char str[100];
    int i, length, isPalindrome = 1;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets to get input, handles spaces.

    // Remove the newline character at the end, if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    // Check for palindrome (case-insensitive)
    for (i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            isPalindrome = 0;
            break;
        }
    }

    // Output the result
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

   // return 0;
}
