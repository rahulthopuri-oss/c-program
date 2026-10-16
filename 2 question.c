#include <stdio.h>

int main() {
    int answered, time, submitted;

    scanf("%d", &answered);
    scanf("%d", &time);
    scanf("%d", &submitted);

    if (submitted == 1)
        printf("Submission not allowed");
    else if (answered >= 1 && time > 0)
        printf("Exam submitted successfully");
    else
        printf("Submission not allowed");

    return 0;
}