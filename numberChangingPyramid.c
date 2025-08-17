#include <stdio.h>
int main()
{
    int num = 0;
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            num++;
            printf("%d ", num);
        }
        printf("\n");
    }
}