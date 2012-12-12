all:	bubble_sort
bubble_sort:
	gcc -o bubble_sort bubble_sort.c -Wall

clean:
	rm -rf bubble_sort