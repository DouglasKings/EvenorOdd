#include <stdio.h>

// Function prototype declaration
int isEven(int N);

int main() {
    int N;

    // Prompt the user to enter an integer
    printf("Enter an integer number: ");
    scanf("%d", &N); // Corrected typo here

    // Check if the number is even
    if(N % 2 == 0) {
        printf("The integer is even.\n");
    }
    // Check if the number is odd
    else {
        printf("The integer is odd.\n");
    }
    // Handle negative numbers
    if(N < 0) {
        printf("Invalid number, please enter a positive integer.\n");
    }

    return 0;
}

// Implementation of the isEven function
int isEven(int N) {
    // Check if the number is even
    if(N % 2 == 0) {
        return 1; // Return 1 if even
    }
    else {
        return 0; // Return 0 if odd
    }
}
