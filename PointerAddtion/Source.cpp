#include <stdio.h>
int Calculator(int *a, int *b);


int main() {
	int a = 10;
	int b = 20;
	int* aPtr = &a;
	int* bPtr = &b;

	int add = Calculator(aPtr, bPtr);
	printf("%d", add);
}

int Calculator(int *a, int *b) {
	*a = *a + *b;
	return *a;
}

