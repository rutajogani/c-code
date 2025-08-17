#include <stdio.h>
int main()
{
    int num = 0;
    for (int i = 1; i <= 7; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            num++;

            if ((i + j) % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}