#include <stdio.h>

int main() {
	
//Print even numbers from 1 to 50.
	for ( int i = 1 ; i <= 30 ; i++ ) {
		if ( i % 2 == 0) {
			printf("%d \n", i );
		}
	}

	
//Print the multiplication table of 5
	int num, multiplication ;
	printf("Enter a number: "); scanf("%d", &num);
	for ( int i = 1 ; i<=10; i++) {
		multiplication = num * i;
		printf("%d x %d = %d \n", num, i, multiplication);
	}
	
//Check if a number is prime.
	int num2, prime=1;
	printf("Enter a number: "); scanf("%d", &num2);
	for ( int i = 2; i <= num2 - 1; i++) {
		if (num2 % i == 0){
			prime=0;
			break;
		}
	}
	if (prime == 1){
		printf("It's a prime number \n");
	}
	else{
		printf("It's not a prime number. \n");
	}	

	
//Sum all numbers from 1 to 100.
	int sum = 0;
	for ( int i = 1; i<=100; i++){
		sum += i;
	}
	printf("%d \n", sum);
	
//Print all numbers divisible by 3 and 5 between 1 and 100.
	for ( int i = 1; i<=100; i++){
		if ( i % 3 == 0 && i % 5 == 0) {
			printf("%d \n", i);
		}
	}
	

	
//Print all prime numbers between 1 and 100.
	int num3 = 1, count;
	for (num3 = 2; num3<=100; num3++){
		count=0;
	
		for ( int i = 1; i<=100; i++){
			if (num3 % i == 0){
				count+=1;
			}
		}
		if (count == 2 ) {
			printf("%d \n", num3);
		}
	}
	
//Program to find a factorial of a number.
	int num4, fact = 1;
	printf("Enter the number: "); scanf("%d",&num4);
	for ( int i = 1 ; i <= num4; i++) {
		fact = i * fact;
	}
	printf("The factorial of the number is: %d\n", fact);
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

