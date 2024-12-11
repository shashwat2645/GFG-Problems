void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void nextPermutation(int *arr, int n) {
  
    // Find the pivot index
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pivot = i;
            break;
        }
    }

    // If pivot point does not exist, 
    // reverse the whole array
    if (pivot == -1) {
        reverse(arr, 0, n - 1);
        return;
    }

    // Find the element from the right that
    // is greater than pivot
    for (int i = n - 1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(&arr[i], &arr[pivot]);
            break;
        }
    }

    // Reverse the elements from pivot + 1 to the end
    reverse(arr, pivot + 1, n - 1);
}
