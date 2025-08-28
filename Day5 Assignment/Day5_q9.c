#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    // Input values
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    // Display results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
