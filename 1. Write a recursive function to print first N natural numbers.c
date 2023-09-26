//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
#include<conio.h>
void natural(int);
void main()
{
	int number;
	printf("\n Enter The number = ");
	scanf("%d",&number);
	natural(number);	
}
void natural(int number)
{
	int i=2;
	if(number>=i)
	natural(number-1); //
	printf("\n %d",number);
}

