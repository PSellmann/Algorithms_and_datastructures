#include <stdio.h>
#include <stdbool.h>
#include "./../../headers/my_utils.h"

void bubblesort(int *arr, int size) { 
    bool swapped = true;
    while(swapped != false) {
        swapped = false;
        for(int i = 0; i < (size-1); i++) {
            if(arr[i] > arr[i+1]) {
                swap_elements(arr, i, i+1);
                swapped = true;
            }
        }
    }
}

int main(void) {
    int arr[] = {9, 4, 1, 8, 6, 5, 3, 7, 2};
    int size = sizeof(arr) / sizeof(int);
    printf("Array before sorting: ");
    print_array(arr, size);
    bubblesort(arr, size);
    printf("Array after sorting: ");
    print_array(arr, size);
    return 0;
}
