#include<stdio.h>
#include<conio.h>
void main()
{
int no,t1,t2,nextno;
nextno=0;
clrscr();
printf("Enter the number");
scanf("%d",&no);
t1=0;
t2=1;
printf("%d\t",t1);
printf("%d\t",t1);

nextno=t1+t2;
while(nextno<no)
{
printf("%d\t",nextno);
t1=t2;
t2=nextno;
nextno=t1+t2;
}
getch();
}