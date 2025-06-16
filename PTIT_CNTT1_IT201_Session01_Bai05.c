#include <stdio.h>
#include <stdlib.h>  

int main(){
    // time complexity: O(n^2)
    // space complexity: O(1)

    int temp;
    int* arr = (int*)malloc(100 * sizeof(int));
    int n = sizeof(arr)/sizeof(arr[0]);  

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }        
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
