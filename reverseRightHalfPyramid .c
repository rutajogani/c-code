#include<stdio.h>
int main()
{   
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = number; i >= 1; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}