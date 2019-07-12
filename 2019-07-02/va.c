#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {
	return a+b;
}

int main(int argc, char *argv[]) {
	printf("location of code : %p\n", main);
	printf("location of heap : %p\n", malloc(100e6));
	int x = 3;
	printf("location of stack: %p\n", &x);
	printf("location of function: %p\n", add);
	return x;
}
