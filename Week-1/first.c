#include <stdio.h>


int main() {

// 1. Print Hello World
    printf("Hello, Linux World! \n");
    
// 2. Program to get the area of a square
	float a;
	printf("Input side of the square: ");
	scanf("%f",&a);
	printf("Area of the given square %f \n",a*a);

// 3. Calculate the area of a circle
	float radius;
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	printf("The area of the cricle is: %f \n", 3.14 * (radius * radius));
	
// 4. Calculate the area of a triangle
	float A,B;
	printf("Enter the height of the triangle: ");
	scanf("%f", &A);
	printf("Enter the base of the triangle: ");
	scanf("%f", &B);
	printf("The area of the triangle is: %f \n", (A*B)/2);
	
// 5. Program to print the cube of a number
	float n;
	printf("Enter the number: "); scanf("%f", &n);
	printf("Cube of the desired number is: %f \n", n*n*n);
	
// 6. Program to get an average of three numbers
	float av1,av2,av3;
	printf("Enter first number: "); scanf("%f", &av1);
	printf("Enter second number: "); scanf("%f", &av2);
	printf("Enter third number: "); scanf("%f", &av3);
	printf("Average of three numbers is: %f \n", (av1+av2+av3)/3 );

// 7. Program to check pass or fail,pass marks >=30 else fail
	int marks;
	printf("Enter Marks: "); scanf("%d", &marks);
	if(marks >= 30){
		printf("You passed! \n");
	}
	else{
		printf("You have failed :( \n");
	}
	
// 8. Same program but with ternary operator
	float markst;
	printf("Enter marks: "); scanf("%f", &markst);
	markst >= 30 ? printf("You Passed! \n") : printf("You failed :( \n");
	
// 9. 
	
	return 0;
}

