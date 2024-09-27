#include<stdio.h>
#include<conio.h>
void main(){
	int p,r,t,c;
	printf("Enter the principle amount");
	scanf("%d",&p);
	printf("Enter the rate of interest");
	scanf("%d",&r);
	printf("Enter the time");
	scanf("%d",&t);
	c=(p*r*t)/100;
	printf("Your compound interest is %d",c);
}
