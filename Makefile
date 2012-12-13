all: bubble_sort quick_sort
bubble_sort: clean
	gcc -o bubble_sort bubble_sort.c -Wall

quick_sort: clean
	gcc -o quick_sort quick_sort.c -Wall

clean:
	rm -rf bubble_sort
	rm -rf quick_sort