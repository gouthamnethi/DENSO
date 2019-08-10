#include <stdio.h> //header file
int main() //Main Program
{
int num,dis; //Declaring the variables
scanf("%d %d",&num,&dis);
int sum=0;
int p=100-dis;
while(num>0)
{
    sum+=num;
    num=(num*p)/100;
}
printf("%d",sum);
return 0;
}
