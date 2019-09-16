#include<stdio.h>  
void palin()    
{    
int n,r,sum=0,temp;    
printf("\nEnter a nuber to check if its a palindrome or not =");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("it is a palindrome number ");    
else    
printf("it is not a palindrome number");   
//return 0;  
}  
