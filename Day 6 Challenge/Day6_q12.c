#include <stdio.h>
int main()
{
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    
    if (number >= 0) {
        if (number == 0) {
            printf("Number is zero\n");
        }
        else {
            printf("Number is positive\n");
        }
    }
    else {
        printf("Number is negative\n");
    }
    
    return 0;
}