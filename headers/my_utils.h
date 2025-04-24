void print_array(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap_elements(int *arr, int index_one, int index_two) {
    int tmp = arr[index_one];
    arr[index_one] = arr[index_two];
    arr[index_two] = tmp;
}
