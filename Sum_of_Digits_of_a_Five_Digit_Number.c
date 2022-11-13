#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    // Read a five digit number n from the user
    scanf("%d", &n);

    // identify the digits
    while (n >= 10)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    // calculate the sum of digits
    sum += n;

    // print the sum
    printf("%d\n", sum);

    return 0;
}