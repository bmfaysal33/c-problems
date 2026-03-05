
#include <stdio.h>

int main()
{

    int n, digit=0;
    printf("Enter a Number: ");

    scanf("%d", &n);

    if(n==0) digit =1;

    while (n != 0)
    {
        
        n/=10;
       digit++;
    }

    printf("Digits in the number : %d", digit);
    return 0;
}
