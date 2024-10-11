#include <stdio.h>

int main() {
    int number;

    do {
        printf("0: ");
        scanf("%d", &number);
        printf("5: %d\n", number);
    } while (number != 0);

    
    number = 5;
    printf("6: %d\n", number); 

    printf("5.\n");
    return 0;
}
