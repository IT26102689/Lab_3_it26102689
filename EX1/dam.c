#include <stdio.h>

#define Gravity 9.80
#define Efficiency 0.9
#define Water_Density 1000.0
#define Watts_per_MegaWatt 1000000.0

int main(void)
{
	double height,FlowRate,mass,work,powerwatts,powermw;

	printf("hieght of the dam (meters): ");
	scanf("%lf",&height);

	printf("flow rate if water(m^3/s):" );
	scanf("%lf",&FlowRate);

	mass=FlowRate*Water_Density;
	work=mass*Gravity*height;
	powerwatts=Efficiency*work;
	powermw=powerwatts/Watts_per_MegaWatt;

	printf("predicted power genarated by the hydroelctric dam: %.2f megawatts\n",powermw);

	return 0;
}




