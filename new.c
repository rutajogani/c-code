#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number + 10; j++)
        {
            if (j % 2 == 0)
            {
                printf(" ");
            }else
            {
                printf("*");
            }
        }
        printf("\n");
        
    }
    
    
    return 0;
}