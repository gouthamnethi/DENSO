#include <stdio.h> //header file
int main() //Main Program
{
int num,dis; //Declaring the variables
scanf("%d %d",&num,&dis); //Reading the input from user
int sum=0; //Declaring and initilazing the sum variable
int p=100-dis; //Declaring and initilazing the value of variable p with 100-discount
while(num>0) // While Loop while num variable should be greater than zero 
{
    sum+=num; //sum=sum+num; we are adding the value of the num
    num=(num*p)/100; // we are decreasing the value of the num with p percentage i.e. num*p% = num*p/100;
}
printf("%d",sum); //printing the value of the sum
return 0; //returning the value to the operation system
} //Ending of the main program
