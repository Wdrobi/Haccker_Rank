#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int number1, number2;
    float number3, number4;

    // Read two integer number from the user
    scanf("%d %d", &number1, &number2);

    // Read two float number from the user
    scanf("%f %f", &number3, &number4);

    // print the sum and difference of two integer
    printf("%d %d\n", number1 + number2, number1 - number2);

    // print the sum and difference of two float number
    printf("%.1f %.1f", number3 + number4, number3 - number4);

    return 0;
}