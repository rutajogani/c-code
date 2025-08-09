#include <stdio.h>
int main()
{
    int number, factorial = 1;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("%d", factorial);

    return 0;
}