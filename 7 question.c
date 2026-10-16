#include <stdio.h>

int main() {
    float x, y, r;
    float interest, discount, amount;

    scanf("%f %f %f", &x, &y, &r);

    interest = (x * y * r) / 100;

    discount = interest * 2 / 100;

    amount = x + interest - discount;

    printf("Interest = %.2f\n", interest);
    printf("Discount = %.2f\n", discount);
    printf("Amount = %.2f", amount);

    return 0;
}
