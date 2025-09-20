#include <stdio.h>

int swap(int *a, int *b, int *c, int *d) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = temp;
}

int main() {
    int w, x, y, z;
    printf("Input data 4 digit: \n");
    scanf("%d %d %d %d", &w, &x, &y, &z);
    printf("Before Swap: w = %d, x = %d, y = %d, z = %d \n", w, x, y, z); //Before swap
    swap(&w, &x, &y, &z);
    printf("After Swap:  w = %d, x = %d, y = %d, z = %d \n", w, x, y, z); //After swap
    return 0;
}
