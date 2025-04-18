#include <stdio.h>


int main() {
//Print Hello World
    printf("Hello, Linux World!\n");
    
//Program to get the area of a square
	float a;
	printf("Input side of the square: ");
	scanf("%f",&a);
	printf("Area of the given square %f \n",a*a);

//Calculate the area of a circle
	float radius;
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	printf("The area of the cricle is: %f \n", 3.14 * (radius * radius));
	
//Calculate the area of a triangle
	float A,B;
	printf("Enter the height of the triangle: ");
	scanf("%f", &A);
	printf("Enter the base of the triangle: ");
	scanf("%f", &B);
	printf("The area of the triangle is: %f \n", (A*B)/2);
	
//Program to print the cube of a number
	float n;
	printf("Enter the number: "); scanf("%f", &n);
	printf("Cube of the desired number is: %f \n", n*n*n);

}

