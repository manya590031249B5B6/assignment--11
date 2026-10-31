
#include <stdio.h>

int main()
{
    int a[5], i, sum = 0;

    printf("Enter 5 elements: ");

    for(register int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(register int j = 0; j < 5; j++)
    {
        sum = sum + a[j];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
