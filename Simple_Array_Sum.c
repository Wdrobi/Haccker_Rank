#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size],sum=0;

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
