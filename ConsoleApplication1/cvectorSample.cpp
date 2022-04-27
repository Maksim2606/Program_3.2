#include <stdio.h>
#include "cvector.h"

int main() {

	cvector vector;

	cvector_init(&vector, sizeof(int));

	for (int i = 0; i < 5; i++) {
		int elem = i * 2;
		cvector_push(&vector, (void*)&elem);
	}

	printf("Vector size: %d\n", cvector_size(&vector));

	printf("Vector elements:\n");
	for (int i = 0; i < cvector_size(&vector); i++) {
		int* elem = (int*)cvector_get(&vector, i);
		if (elem != NULL)
			printf("%d = %d\n", i, *elem);
	}

	if (cvector_delete(&vector, 2))
		printf("Delete 3 element:\n");
	else
		printf("Error in delete:\n");

	printf("Vector elements:\n");
	for (int i = 0; i < cvector_size(&vector); i++) {
		int* elem = (int*)cvector_get(&vector, i);
		if (elem != NULL)
			printf("%d = %d\n", i, *elem);
	}

	printf("Set last element to 777:\n");
	int elem = 777;
	cvector_set(&vector, cvector_size(&vector) - 1, &elem);

	printf("Vector elements:\n");
	for (int i = 0; i < cvector_size(&vector); i++) {
		int* elem = (int*)cvector_get(&vector, i);
		if (elem != NULL)
			printf("%d = %d\n", i, *elem);
	}

	cvector_clear(&vector);

	return 0;
}