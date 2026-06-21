/*
   Alogorithm

   START
        Accept first no as no1
        Accept second no as no2
        perform addition of no1 and no2
        display the result
   STOP
*/

#include<stdio.h>

int main()
{
    float i,j,k;

    printf("Enter first number: \n");
    scanf("%f",&i);

    printf("Enter Second number: \n");
    scanf("%f",&j);

    k = i + j;
    printf("Addition is: %f\n",k);


    return 0;
}
