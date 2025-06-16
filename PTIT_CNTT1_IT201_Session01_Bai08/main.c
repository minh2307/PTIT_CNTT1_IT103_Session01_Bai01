#include <stdio.h>

void bubble_sort(int a[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void find_most_frequent(int a[], int size) {
    int current = a[0];
    int count = 1;
    int max_count = 1;
    int most_frequent = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] == current) {
            count++;
        } else {
            if (count > max_count) {
                max_count = count;
                most_frequent = current;
            }
            current = a[i];
            count = 1;
        }
    }
    if (count > max_count) {
        max_count = count;
        most_frequent = current;
    }
    printf("Phan tu xuat hien nhieu nhat trong mang la: %d",most_frequent);
}

int main(void) {
    int arr[] = {5, 1, 2, 99, 5, 3, 1, 99, 5,9,99};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    find_most_frequent(arr, size);
    return 0;
}

// time complexcity: O(n^2)
// space complexcity: O(n)