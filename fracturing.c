#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance() //distance = diameter of a circle
{
	double x1;
	double y1;
	double x2;
	double y2;
	double distance;
	
	printf("Enter two values for point #1 (x y):\n");
	scanf("%lf %lf", &x1, &y1);
	
	printf("Enter two values for point #2 (x y):\n");
	scanf("%lf %lf", &x2, &y2);
	
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); //distance formula
	printf("\nThe distance between these two points is %.2lf units\n\n", distance);
	
	return distance;
}

double caclulatePerimeter()
{
	double diameter = calculateDistance(); //retrieve diameter from distance function
	double perimeter = PI * diameter; //diameter = pi * d
	
	printf("The perimeter of the circle is %.2lf units\n\n", perimeter);
	
	return 1;
}

double calculateArea()
{
	double diameter = calculateDistance();
	double area = PI * pow(diameter/2, 2); //area = pi * r^2
	
	printf("The area of the circle is %.2lf units\n\n", area);
	
	return 1;
}

double calculateWidth()
{
	double width = calculateDistance();
	
	printf("The width of the cricle is %.2lf units wide\n\n", width);

	return 1;
}

double calculateHeight()
{
	double height = calculateDistance();
	
	printf("The height of the cricle is %.2lf units tall\n\n", height);

	return 1;
}

int main(void)
{
	calculateDistance();
	caclulatePerimeter();
	calculateArea();
	calculateWidth();
	calculateHeight();

	return 0;
}

/* 
compile with -lm flag, allows 'pow' and 'sqrt' math.h functions to work:
"$gcc -o run fracturing.c -lm"
*/

/*
fracturing.c by Zayne Dockery
UCFID: 5308103
*/