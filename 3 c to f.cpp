#include<stdio.h>
int main()
{
	int c,f;
	printf("Enter temperature in celcius: ");
	scanf("%d",&c);
	f = ((9*c)/5) + 32;
	printf("In fahrenheit... %d degrees",f);
}
