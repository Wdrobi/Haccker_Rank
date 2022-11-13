#include <stdio.h>

int main()
{
    int length, array[1000], i;
    scanf("%d", &length);

    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = length - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
