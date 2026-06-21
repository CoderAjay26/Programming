/*
   START
        Accept number as no
        if no is completely divisible by two 
            then print even 
        otherwise 
            print odd
   STOP

   START
        Accept number as no
        divide no by two
        IF remainder is 0 
            then print as even
        otherwise
            print as odd

   STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;                //modulo operator (%)

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}