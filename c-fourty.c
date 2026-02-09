
//  1. Check whether a number is even or odd.

#include <stdio.h>

int main()
{

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even \n");
    else
        printf("Odd \n");

    return 0;
}

// 2. Find the largest of two numbers.

#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is biggest", a);
    else
        printf("%d is biggest", b);
}

// 3. Find the largest of three numbers.

#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter three numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("The largest is %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The largest is %d", b);
    }
    else
    {
        printf("The largest is %d", c);
    }

    return 0;
}

// 4. Check whether a number is positive, negative, or zero.

#include <stdio.h>

int main()
{

    int a;
    printf("Enter a number: ");

    scanf("%d", &a);

    if (a > 0)
    {
        printf("Positive Number");
    }
    else if (a == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative Number");
    }

    return 0;
}

// 5. Check whether a number is divisible by 5 and 11

#include <stdio.h>

int main()
{

    int a;
    printf("Enter a number: ");

    scanf("%d", &a);

    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("The number is divisible by 5 and 11");
    }
    else
    {
        printf("The number is not divisible by 5 and 11");
    }

    return 0;
}

//  6. Check whether a year is a leap year or not.

#include <stdio.h>

int main()
{

    int year;
    printf("Enter a year: ");

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}

// 7. Input a character and check if it's a vowel or consonant.

#include <stdio.h>

int main()
{

    char ch;
    printf("Enter a character: ");

    scanf("%c", &ch);

    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        printf("Vowel \n");
    }
    else
    {
        printf("Consonant \n");
    }

    return 0;
}

// 8. Check whether a number is a prime number or not.

#include <stdio.h>

int main()
{

    int num, is_prime = 1;
    printf("Enter a num: ");

    scanf("%d", &num);

    if (num <= 1)
        is_prime = 0;
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}

// 9. Print the first N natural numbers using a loop.

#include <stdio.h>

int main()
{

    int n;
    printf("Enter N: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

// 10. Print the sum of the first N natural numbers.

// Method 01

#include <stdio.h>

int main()
{

    int n, sum = 0;
    printf("Enter N: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d \n", sum);

    return 0;
}

// Method 02

#include <stdio.h>

int main()
{

    int n, sum = 0;
    printf("Enter N: ");

    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;
    printf("%d \n", sum);

    return 0;
}


//11. Print multiplication table of any number.


#include <stdio.h>

int main()
{

    int n;
    printf("Enter Table Number: ");

    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    
    return 0;
}



// 12. Reverse a number using a loop.
