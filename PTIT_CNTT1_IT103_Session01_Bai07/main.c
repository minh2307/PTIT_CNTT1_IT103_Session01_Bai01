#include <stdio.h>

int check_duplicates_ex1(int* arr,int size) {
    printf("Vi du 1:\n");
    int map[1000] = {0};
    for (int i = 0; i < size; i++) {
        map[arr[i]]++;
    }
     for (int i = 0; i < 1000; i++) {
         if (map[i] > 1) {
            printf("So %d xuat hien %d lan \n", i, map[i]);
         }
     }

    // time complexcity: O(n)
    // space complexcity: O(n)
}

int check_duplicates_ex2(int* arr,int size) {
    printf("Vi du 2:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int count = 1;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
        }else {
            count > 1 ? printf("So %d xuat hien %d lan\n", arr[i], count) : "" ;
            count = 1;
        }
    }

    // time complexcity: O(n^2)
    // space complexcity: O(n)
}

int main(void) {
    int arr[] = {5, 1, 2, 5, 3, 1, 99, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    check_duplicates_ex1(arr, size);
    check_duplicates_ex2(arr, size);
    return 0;
}
