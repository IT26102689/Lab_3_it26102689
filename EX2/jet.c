#include <stdio.h>
int main(void)
{
	double a,t,vkmh,vms,s;

	printf("take off speed (km/h): ");
	scanf("%lf",&vkmh);

	printf("catpult distance (meter): ");
	scanf("%lf",&s);

	vms=vkmh*1000/3600;
	t=2*s/vms;
	a=vms/t;

	printf("accelaration:%.2f m/s^2\n",a);
	printf("time to reach takeoff speed:%.2f seconds\n",t);
	return 0;
}
