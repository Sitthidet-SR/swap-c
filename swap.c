#include <stdio.h>

void swap_array(int arr[], int n) {
    if (n <= 1) return;
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void delete_first(int arr[], int *n) {
    (void)arr;
    (void)n;
}

void print_array(int arr[], int n) {
    printf("Current array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    int n = 0;
    char menu;
    while (1) {
        printf("Sitthidet Seerueng");
        printf("\nMenu: n = next (input 10 digit), d = swap left 1, q = exit\n");
        printf("Enter menu: ");
        scanf(" %c", &menu);
        if (menu == 'q') {
            printf("Exit program.\n");
            break;
        } else if (menu == 'n') {
            printf("Input 10 digits separated by space: ");
            n = 10;
            for (int i = 0; i < 10; i++) {
                scanf("%d", &arr[i]);
            }
            printf("Current array: ");
            print_array(arr, n);
        } else if (menu == 'd') {
            if (n > 0) {
                swap_array(arr, n);
                printf("After swap left 1: ");
                print_array(arr, n);
            } else {
                printf("Array is empty.\n");
            }
        } else {
            printf("Invalid menu.\n");
        }
    }
    return 0;
}
