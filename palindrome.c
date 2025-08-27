#include <stdio.h>
void checkPalindrome(int number)
{
    int sum = 0;
    int ans = number;

    while (number != 0)
    {
        int singleDigit = number % 10;
        sum = sum * 10 + singleDigit;
        number = number / 10;
    }

    if (ans == sum)
    {
        printf("This Number Is Palindrome");
    }
    else
    {
        printf("This Number Is Normal");
    }
}

int main()
{
    checkPalindrome(231);
    checkPalindrome(131);
    return 0;
}