void reverseArray(int *arr, int l, int r){
    while(l<r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int n, int d) {
    // code here
    d = d%n;
    
    reverseArray(arr, 0, d-1);
    
    reverseArray(arr, d, n-1);
    
    reverseArray(arr, 0, n-1);
    
}
