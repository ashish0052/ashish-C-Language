#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int b;
	
     printf("Enter the value of a");
	 scanf("%d",&a);
     printf("Enter the value of b");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;


	printf(" The value of x and y after swapping is %d %d",a,b);
}
