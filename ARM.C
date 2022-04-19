#include<stdio.h>
#include<conio.h>
int main()
{
int no,rev,sum=0,temp;
clrscr();
printf("Enter the number");
scanf("%d",&no);
temp=no;

while(no>0)
{
rev=no%10;
sum+=(rev*rev*rev);
no=no/10;
}
if(temp==sum)
{
printf("armstrong number");
}
else
{
printf(" Not armstrong number");
}
getch();
}