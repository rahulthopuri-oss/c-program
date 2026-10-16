#include <stdio.h>

int main() {
    float petrol, mileage, distance;

    scanf("%f %f %f", &petrol, &mileage, &distance);

    if (petrol * mileage >= distance)
        printf("Can reach");
    else
        printf("Cannot reach");

    return 0;
}
