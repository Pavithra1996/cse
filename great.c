#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("a is greater");
elseif((b>a)&&(b>c))
printf("b is greater");
else
printf("c is greater");
return 0;
}
