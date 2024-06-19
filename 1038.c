#include <stdio.h>

int main() {
    int press, quant;
    scanf("%d %d", &press, &quant);
    if (press == 1) {
        printf("Total: R$%.2lf\n", quant*4.00);
    } else if (press == 2) {
        printf("Total: R$%.2lf\n", quant*4.50);
    } else if (press == 3) {
        printf("Total: R$%.2lf\n", quant*5.00);
    } else if (press == 4) {
        printf("Total: R$%.2lf\n", quant*2.00);
    } else if (press == 5) {
        printf("Total: R$%.2lf\n", quant*1.50);
    }
    return 0;
}
