#include <stdio.h>
#include <math.h>


int main() 
{
    int a, b;

    printf("Enter two integers (a ≤ b): ");
    scanf("%d %d", &a, &b);

    if (a <= b) 
    {
        printf("Squares of numbers from %d to %d:\n", a, b);

        for (int i = a; i <= b; i++) 
        {
            int square = i * i;
            printf("%d ", square);
        }
        printf("\n");
    } else 
    {
        printf("check correct input a ≤ b.\n");
    }

    return 0;
}

