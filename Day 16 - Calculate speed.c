// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float distance, time, speed;
    printf("Enter Distance:");
    scanf("%f" , &distance);
    
    printf("Enter Distance: ");
    scanf("%f", &time);
    
    speed = distance/time;
    printf("The speed is %f", speed);

    return 0;
}