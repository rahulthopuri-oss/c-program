#include <stdio.h>

int main() {
    int coins, x, y;
    int longben, blackbeard, remaining, pirates;

    scanf("%d %d %d", &coins, &x, &y);

    longben = coins * x / 100;
    remaining = coins - longben;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirates = remaining / 3;

    printf("Long Ben = %d\n", longben);
    printf("Blackbeard = %d\n", blackbeard);
    printf("Each pirate = %d\n", pirates);

    return 0;
}