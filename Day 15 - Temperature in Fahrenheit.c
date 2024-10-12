#include <stdio.h>
float main() {
    float F, C;
    printf("Enter temperature in Fahrengeit:");
    scanf("%f",&F);
    C = (F - 32) * 5/9;
    
    printf("Temp. in  Celsius: %f" , C);
    return 0;
}