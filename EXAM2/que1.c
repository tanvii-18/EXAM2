#include<stdio.h>
#include<conio.h>

void main()
{
	int firstA,secondA,thirdA;
	
	printf("Enter the First Angle :");
	scanf("%d",&firstA);
	
	printf("Enter the Second Angle :");
	scanf("%d",&secondA);
	
	thirdA = 180 - (firstA+secondA);
	
	printf("Third Angle is %d",thirdA);
}