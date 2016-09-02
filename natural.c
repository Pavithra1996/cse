#include<stdio.h>
#include<conio.h>
int main()
{
int n,c,sum=0;
printf("Enter the numbers");
scanf("%d",&n);
for(c=0;c<=n;c++)
{
sum=sum+c;
}
printf("Sum of natural no=%d",sum);
return 0;
}
