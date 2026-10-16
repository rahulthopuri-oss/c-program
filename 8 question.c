#include <stdio.h>

int main() {
    int years, score;

    scanf("%d %d", &years, &score);

    if (years < 3)
        printf("Junior");
    else if (years <= 7) {
        if (score >= 80)
            printf("Mid-Level");
        else
            printf("Junior");
    }
    else {
        if (score >= 85)
            printf("Senior");
        else
            printf("Mid-Level");
    }

    return 0;
}
