#include<stdio.h>
#include<conio.h>
void main()
{
int no;

clrscr();

printf("Enter the number:->");
scanf("%d",&no);
if(no%2==0)
{
printf("Number is even");
}
else
{
printf("Number is odd");
}
getch();
}