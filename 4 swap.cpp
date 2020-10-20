#include<stdio.h>
int main()
{
	int temp, a=11, b=22;
	temp = a;
	a = b;
	b = temp;
	printf("To simplify, I pre-assigned the values as 11 and 22. \nCheck this swap out. New values...! \n%d and %d", a, b);
	return 0;
}
