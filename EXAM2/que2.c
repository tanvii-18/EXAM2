#include<stdio.h>
#include<conio.h>
//WAP to read the age of person and cheack if he/she eligible for vote.
void main()
{
	int age;
	
	printf("Enter your Age :");
	scanf("%d", &age);
	
	if(age>18)
	{
		printf("You are eligible for the vote !");
	}
	else
	{
		printf("You are not eligible for the vote !");
	}
}
