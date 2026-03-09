
#include <stdio.h>

int main()
{
    int a = 0, b = 1, sum = 0, n;
    printf("Enter N: ");

    scanf("%d", &n);

    printf("Fibonacci series up to N terms: \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }

    return 0;
}
