#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
	if (argv < 2){
		printf("No arguments found \n");
		return 1;
	}
	int bytes = atoi(argv[1]);
	int *array = malloc((bytes*1024*1024)*(sizeof(int)));
	if (array == NULL){
		printf("Memory not assigned \n");
		exit(-1);
	}
	for (int i = 0; i < bytes*1024*1024; ++i){
		array[i] = i;
	}
	sleep(10);

	return 0;
}
