//By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
//find the sum of the even-valued terms

#include <stdio.h>

#define TOTALSUM 4000000  

main() {
  int sum = fib();
  printf("%d\n", sum);

}

int fib() {
	int tempNum;
	int numFirst=0;
	int numLast=1;
	int sum=0;
	while (sum<TOTALSUM) {
		tempNum = numLast;  //stores last number into temp
		numLast = numFirst + numLast;	//adds the two numbers to find the next fib number
		numFirst = tempNum;	//stores the last n

		if (numLast%2 == 0) { //finds out if number is even
			sum = sum + numLast; //adds last even number and current even number together to find total sum
		}		
	}
	return sum;
}


