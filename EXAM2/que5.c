#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("Enter any numbers :");
	scanf("%d", &n);
	
	int ld=n%10;
	
	printf("last digit is %d\n", ld);
	
	while(n>9)
	{
		n=n/10;
	}
	
	printf("First digit is %d\n", n);
	
	printf("Sum of First digit and Last digit is %d", n+ld);
}