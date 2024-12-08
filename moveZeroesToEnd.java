// User function Template for Java

class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        int size = arr.length;
        int temp[] = new int[size];
        int j=0;
        for(int i=0;i<size;i++){
            if(arr[i]!=0){
                temp[j] = arr[i];
                j++;
            }
        }
        for(int i=0;i<size;i++){
            arr[i] = temp[i];
        }
    }
}
