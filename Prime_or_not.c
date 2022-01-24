/* C Program to find whether a Number is Prime or Not using Recursion */

#include <stdio.h>

int main()
{

    //Declaring Variables
    int num, check;

    //Declaring Function
    int primeno(int, int);

    //Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    //Calling the function
    check = primeno(num, num / 2);

    //Checking whether the number is prime or not
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;

}

//Function to see whether the number is prime or not
int primeno(int num, int i)
{

    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }
    }

}
