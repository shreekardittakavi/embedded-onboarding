#include <stdio.h>
#include <stdlib.h>

void FizzBuzz(int);
int cmp(const void*, const void*);

int main() {
    printf("Hello, World!\n");

    int* fizzBuzzInput = malloc(20 * sizeof(int));
    for (int i = 0; i < 20; i++)
	    fizzBuzzInput[i] = i+1;

    printf("Fuction call on array: \n");
    FizzBuzz(*fizzBuzzInput);

    printf("Iterating through array: \n");
    for (int i = 1; i <= 30; i++)
        FizzBuzz(fizzBuzzInput[i]);

    printf("Prining the reversed array: \n");
    qsort(fizzBuzzInput, 20, sizeof(int), cmp);
    for (int i = 0; i < 20; i++)
	printf("%d\n", fizzBuzzInput[i]);

    free(fizzBuzzInput);
}


/*
matrix_t matrix_transpose(matrix_t m) {
    matrix_t mt = create_matrix(m.cols, m.rows); //<- assume this has been implemented

    for (int i = 0; i < m.rows * m.cols; ++i) {
        int row = i / m.cols;
	int col = i % m.cols;

	mt.data[col * mt.cols + row] = m.data[row * m.cols + col];
    }

    return mt;
}
*/

void FizzBuzz(int n) {
    if (n % 3 == 0)
        printf("Fizz");
    if (n % 5 == 0)
        printf("Buzz");
    printf("\n");
}

int cmp(const void *a, const void *b) {
    return *(const int *)b - *(const int *)a;
}
