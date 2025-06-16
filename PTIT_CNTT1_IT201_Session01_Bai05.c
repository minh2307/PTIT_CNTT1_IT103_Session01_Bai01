#include <stdio.h>

int bubbleSort(int temp){
    int* arr = (int*)malloc(100 * sizeof(int));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]) - 1 - i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }        
    }
}

// time complexcity: O(n^2)
// space complexcity: O(1)