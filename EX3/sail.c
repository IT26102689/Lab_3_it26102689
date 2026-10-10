#include <stdio.h>
#include <math.h>
int main(void)
{
	double A,B,h;

	printf("area of the sail: ");
	scanf("%lf",&A);

	h=sqrt(3*A);
	B=2*h/3;

	printf("height of the sail:%.2f meters\n",h);
	printf("base of the sail:%.2f meters\n",B);

	return 0;
}


