#include <stdio.h>

int main() 
{
    int number, digit, evenCount = 0, oddCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) 
    {
        digit = number % 10;

        if (digit % 2 == 0) 
        {
            evenCount++;
        } else 
        {
            oddCount++;
        }

        number /= 10;
    }

    printf("%d,%d\n", evenCount, oddCount);


    return 0;
}
