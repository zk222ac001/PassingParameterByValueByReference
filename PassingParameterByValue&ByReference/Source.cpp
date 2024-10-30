#include <stdio.h>

// function protype
int SwappingByValue(int a, int b);
int SwappingByReference(int *a, int *b);


int main(void) {

	int a = 10;    
	int b = 20;
	printf("The value of a = %d and b = %d , Before Swapping function\n", a, b);
	// Invoke Swapiing function
	int temp1 = SwappingByValue(a,b);
	printf("The value of a = %d and b = %d and Temp = %d , After Swapping function\n", a, b , temp1);
	printf(".................................... BY reference.................................................\n");
	printf("The value of a = %d and b = %d , Before Swapping function\n", a, b);
	// Invoke Swapiing function
	int *aPtr = &a;
	int *bPtr = &b;
	int temp2 = SwappingByReference(aPtr, bPtr);
	printf("The value of a = %d and b = %d and Temp = %d , After Swapping function\n", *aPtr, *bPtr, temp2);


}

// function declaration , factor header 
int SwappingByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	return temp;
}

int SwappingByReference(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return temp;
}

