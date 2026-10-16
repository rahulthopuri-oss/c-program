#include <stdio.h>

int main() {
    int d1, c1, d2, c2;
    int dollar, cent;

    scanf("%d %d", &d1, &c1);
    scanf("%d %d", &d2, &c2);

    dollar = d1 + d2;
    cent = c1 + c2;

    if (cent >= 100) {
        dollar = dollar + 1;
        cent = cent - 100;
    }

    printf("%d dollars %d cents", dollar, cent);

    return 0;
}
