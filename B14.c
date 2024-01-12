#include <stdio.h>
int main() {
    int number;
    int count = 0;

    printf("Enter follow sequence nonzero numbers end with zero: \n");

    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        count++;
    }

    printf("%d\n", count);

    return 0;
}
