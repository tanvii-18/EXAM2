#include<stdio.h>
#include<conio.h>

void main()
{
	int r,formula;
	float pi=3.14;
	
	printf("Enter the value of R :");
	scanf("%d", &r);
	
	formula = 4/3* pi *(r*r*r);
	
	printf("(4/3 * 3.14 * r3) = %d", formula);
}