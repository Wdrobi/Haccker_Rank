#include <stdio.h>

int main()
{
    int n;
    int array[1000], sum = 0, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d\n", sum);

    return 0;
}
