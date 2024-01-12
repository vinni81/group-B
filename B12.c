#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a natural number: ");
    scanf("%d", &number);
    
    int small = 9;
    int large = 0;

    while (number > 0) 
    {
        int digit = number % 10;
        
        if (digit < small) 
        {
            small = digit;
        }
        
        else if  (digit > large) 
        {
            large = digit;
        }
        number /= 10;
    }
        
        if (small == large) 
        {
        printf("small=large\n");
        }
        
    printf("%d,%d\n",small,large);

    
    return 0;
}
