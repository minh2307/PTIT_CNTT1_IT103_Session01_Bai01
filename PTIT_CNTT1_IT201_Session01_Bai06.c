#include <stdio.h>

int count_element(){
    int* arr = (int*)malloc(100 * sizeof(int));
    int size= sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < size; i++){
        int flag[i] = 0;
    }

    for (int i = 0; i < size; i++){
        if(flag[i]){
            continue;s
        }
        int count = 1;
        for (int j = 0; j < size; j++){                    
            if(arr[i] == a[j]){
                count++;
                flag[j] = 1;
            } 
        } 
        printf("phần tử %d có: %d số lần suất hiện trong mảng", arr[i], count);
    }
}

// time complexcity: O(n^2)
// space complexcity: O(n)s