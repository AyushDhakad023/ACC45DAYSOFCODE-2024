#include <stdio.h>

int main() {
    int points;

    // Input the points scored by the team
    printf("Enter the points scored by the team: ");
    scanf("%d", &points);

    // Check if the team qualifies
    if (points >= 12) {
        printf("The team has qualified for the next stage.\n");
    } else {
        printf("The team has not qualified for the next stage.\n");
    }

    return 0;
}
