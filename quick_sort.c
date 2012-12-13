#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void quick_sort(int* array, int begin, int end) {
	int i, j, pivo, aux;

	i = begin;
	j = end;
	pivo = array[(begin+end) / 2];

	while (i < j) {
		while (array[i] < pivo) {
			i++;
		}
		while (array[j] > pivo) {
			j--;
		}
		if (i <= j) {
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;
			i++;
			j--;
		}
		if (j > begin) {
			quick_sort(array, begin, j);
		}
		if (i < end) {
			quick_sort(array, i, end);
		}
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

	len = sizeof(array) / sizeof(int);

	sorted = malloc(sizeof(array));
	memcpy(sorted, array, sizeof(array));

	quick_sort(sorted, 0, len-1);

	print_array(array, len);
	print_array(sorted, len);

	free(sorted);
	return 0;
}
