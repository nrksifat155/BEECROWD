#include <stdio.h>

int main() {
    float A, sum, sum1, sum3, sum4, sum6, sum7, sum9, sum10, sum12, sum13;
    int sum2, sum5, sum8, sum11, sum14;

    scanf("%f", &A);

    if (A <= 400) {
        sum = A * 0.15;
        sum1 = A + sum;
        sum2 = 15;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sum1, sum, sum2);
    } else if (A >= 800.00 && A < 1200.00) {
        sum3 = A * 0.12;
        sum4 = A + sum3;  // Corrected the variable used
        sum5 = 12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sum4, sum3, sum5);
    } else if (A >= 1200.00 && A < 2000.00) {
        sum6 = A * 0.91;
        sum7 = A + sum6;
        sum8 = 10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sum7, sum6, sum8);
    } else if (A >= 2000.00) {
        sum9 = A * 0.07;
        sum10 = A + sum9;
        sum11 = 7;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sum10, sum9, sum11);
    } else {
        sum12 = A * 0.04;
        sum13 = A + sum12;
        sum14 = 4;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sum13, sum12, sum14);
    }

    return 0;
}
