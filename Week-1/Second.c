#include <stdio.h>

int main() {
	
	
// 1. Print even numbers from 1 to 50.
	for ( int i = 1 ; i <= 30 ; i++ ) {
		if ( i % 2 == 0) {
			printf("%d \n", i );
		}
	}

	
// 2. Print the multiplication table of 5
	int num, multiplication ;
	printf("Enter a number: "); scanf("%d", &num);
	for ( int i = 1 ; i<=10; i++) {
		multiplication = num * i;
		printf("%d x %d = %d \n", num, i, multiplication);
	}
	
	
// 3. Check if a number is prime.
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

	
// 4. Sum all numbers from 1 to 100.
	int sum = 0;
	for ( int i = 1; i<=100; i++){
		sum += i;
	}
	printf("%d \n", sum);
	
	
// 5. Print all numbers divisible by 3 and 5 between 1 and 100.
	for ( int i = 1; i<=100; i++){
		if ( i % 3 == 0 && i % 5 == 0) {
			printf("%d \n", i);
		}
	}
	

	
// 6. Print all prime numbers between 1 and 100.
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
	
	
// 7. Program to find a factorial of a number.
	int num4, fact = 1;
	printf("Enter the number: "); scanf("%d",&num4);
	for ( int i = 1 ; i <= num4; i++) {
		fact = i * fact;
	}
	printf("The factorial of the number is: %d\n", fact);
	
	
/* 8. Program to print a pattern like this:
		#
		##
		###
		####
		#####
*/
	char pattern = '#';
	for ( int i = 1; i<=5; i++){
		for ( int j = 1; j<=i; j++){
			printf("%c", pattern);
		}
		printf("\n");
	}
	
	
/* 9. Program to print a pattern like this:
		*
	   * *
	  * * *
	 * * * *
	* * * * * 
*/
	int jagah = 5;
	for ( int i = 1; i <= jagah; i++){
		for ( int space = 1; space <= jagah - i ; space++){
			printf(" ");
		}
		for ( int star = 1 ; star <= i ; star ++){
			printf("* ");
		}
		printf("\n");
	}
	
	
// 10. Print the first 10 multiples of a given number. (while loop)
	int num5, temp0=1;
	printf("Enter a number: "); scanf("%d",&num5);
	while (temp0<=10){
		printf("%d x %d = %d \n", num5, temp0, temp0 * num5);
		temp0++;
	}
	
// 11. Print all odd numbers between 50 and 1 in reverse order.
	int num6 = 50;
	while ( num6 >= 1 ) {
		if ( num6 % 2 == 1){
			printf("%d \n", num6);
		}
		num6--;
	}
	
	
// 12. Keep accepting input until the user enters a negative number, then print the sum of all positive numbers entered.
	int num7, sum2=0;
		while (num7 >= 0){
		printf("Enter the number: "); scanf("%d", &num7);
		sum2+=num7;
	}
	printf("you entered a negative number. \n %d \n", sum2);
	

// 13. Keep asking the user to enter a number until they enter 0.
	int num8;
	while (num8>=0){
		printf("Enter a number: "); scanf("%d",&num8);
		if (num8==0){
			printf("You entered number 0 \n");
			break;
		}
	}
	

// 14. Count the number of digits in a given number.
	int num12, count0=0;
	printf("Enter the number: "); scanf("%d",&num12);
	while (num12!=0){
		num12= num12/10;
		count0++;
	}
	printf("%d \n",count);
		
	
// 15. Reverse a number using a while loop.
	int num9, reversed=0;
	printf("Enter a number: "); scanf("%d",&num9);
	if (num9==0) {
		printf("0 \n");
	}
	while (num9!=0){
		int digit = num9 % 10;
		reversed= reversed*10 + digit;
		num9= num9/10;
	}
	printf("%d \n", reversed);
	
// 16. Check if a number is a palindrome (e.g., 121, 1331) using a while loop.
	int num10, reversed1 = 0;
	printf("Enter the number: "); scanf("%d",&num10);
	int original1=num10;
	if(num10==0){
		printf("0");
	}
	while (num10!=0) {
		int digit = num10%10;
		reversed1 = reversed1 * 10 + digit;
		num10= num10/10;
	}
	if (original1==reversed1){
		printf("It is a palindrome.\n");
	}
	else {
		printf("It is not a palindrime. \n");
	}
	
	return 0;
	
}

