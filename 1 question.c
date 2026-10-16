#include <stdio.h>

int main() {
    float distance, fare;
    char membership;

    printf("Enter distance travelled: ");
    scanf("%f", &distance);

    printf("Do you have membership? (Y/N): ");
    scanf(" %c", &membership);

    // Base fare
    fare = 100;

    // Extra charge for distance above 10 km
    if (distance > 10) {
        fare = fare + (distance - 10) * 20;
    }

    // 10% membership discount
    if (membership == 'Y' || membership == 'y') {
        fare = fare - (fare * 0.10);
    }

    printf("Amount payable = Rs. %.2f", fare);

    return 0;
}
