#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap without third variable
    a = a + b;  // Step 1: add both numbers
    b = a - b;  // Step 2: subtract new b from sum
    a = a - b;  // Step 3: subtract new b from sum

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
