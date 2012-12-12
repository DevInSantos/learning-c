#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble_sort(int* array, int len) {
	int last = len - 1, i, j, bigger;

	for (i = 0; i < len; i++) {
		for (j = 0; j < last; j++) {
			if (array[j] > array[j+1]) {
				bigger = array[j];
				array[j] = array[j+1];
				array[j+1] = bigger;
			}
		}
		last--;
	}
}

void print_array(int* array, int len) {
	int i;
	printf("[");
	for (i = 0; i < len; i++) {
		if (i == len-1) {
			printf("%d", array[i]);
		} else {
			printf("%d, ", array[i]);
		}
	}
	printf("]\n");
}

int main(int argc, const char *argv[])
{
	int len;
	int array[] = { 4, 5, 3, 2, 1 };
	int *sorted;

	len = sizeof(array) / sizeof(array[0]);

	sorted = malloc(sizeof(array));
	memcpy(sorted, array, sizeof(array));

	bubble_sort(sorted, len);

	print_array(array, len);
	print_array(sorted, len);

	free(sorted);
	return 0;
}
