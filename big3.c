#include<stdio.h>
void big3()
{
   int num1,num2,num3;
   
   //Ask user to input any three integer numbers
   printf("\n Enter Three numbers to check the biggest number among them:");
   //Store input values in variables for comparsion
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
      printf("\n num1 is greatest");
   else if((num2>num3)&&(num2>num1))
      printf("\n num2 is greatest");
   else
      printf("\n num3 is greatest");
   //return 0;
}
