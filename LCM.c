#include <stdio.h>

int main() {
    int num1, num2, i, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Step 1: Find GCD
    for(i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Step 2: Find LCM using formula
    lcm = (num1 * num2) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}