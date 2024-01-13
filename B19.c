#include <stdio.h>

int main() 
{
    int number, digit, sum = 0;

    printf("Enter natural number: ");
    scanf("%d", &number);

    
    while (number > 0) 
    {
        digit = number % 10; 
        sum += digit; 
        number /= 10; 
    }

    if (sum == 10) 
    {
        printf("Yes\n");
    } 
    else 
    {
        printf("No\n");
    }

    return 0;
}


