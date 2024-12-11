void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverseArray(int arr[], int n) {
    // Code here
    int i = 0;
    for(int i=0;i<n/2;i++){
        swap(&arr[i],&arr[n-i-1]);
    }
}
