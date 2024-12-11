void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverseArray(int arr[], int n) {
    // Code here
    int i = 0;
    int j = n-1;
    while(i<j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
}
