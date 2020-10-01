#include<stdio.h>
#include<conio.h>
#define PI 3.141

main()
{
	float radius,area;
	printf("enter the radius:-");
	scanf("%f",&radius);
	area= PI*radius*radius;
	printf("AREA=% 0.2f",area);
	getch();
}
