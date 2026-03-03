
#include <stdio.h>

int main()
{

    int n, tem, rev = 0;
    printf("Enter a Number: ");

    scanf("%d", &n);

    while (n != 0)
    {
        tem = n % 10;
        n/=10;
        rev = rev *10 + tem;
    
    }

    printf("Reversed Number : %d", rev);
    return 0;
}
