#include <stdio.h>
#include "./../../headers/my_utils.h"

void selectionsort(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        int idx = i;
        for(int j = i; j < size; j++) {
            if(arr[j] < arr[idx]) {
                idx = j;
            }
        }
        swap_elements(arr, i, idx);
    }
}

int main(void) {
    int arr[] = {9, 4, 1, 8, 6, 5, 3, 7, 2};
    int size = sizeof(arr) / sizeof(int);
    printf("Array before sorting: ");
    print_array(arr, size);
    selectionsort(arr, size);
    printf("Array after sorting: ");
    print_array(arr, size);
    return 0;
}
