//Find the sum of all the multiples of 3 or 5 below 1000
#include <stdio.h>

main() {
	int num = sum();
	printf("The Sum of all the multiples of 3 or 5 below 100 is %d\n", num);

}

int sum() {
	//first finds all the integers divisible by 3 or 5
	int i;
	int sum=0;
	for (i = 0; i<1000; i++) { //for loop to find numbers under 1000
		if (i%3==0 || i%5==0) { //for every number divislbe by 3 or 5
			sum = sum + i; //adds them together
		}
	}
	return sum;
}
