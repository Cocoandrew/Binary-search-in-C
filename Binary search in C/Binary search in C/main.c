//
//  main.c
//  Binary search in C
//
//  Created by APPLE on 09/07/2024.
//

#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1; // Element not found
}

int main() {
    int arr[] = {11, 14, 25, 30, 40, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 4; // Index to find
    
    int result = binarySearch(arr, 0, n - 1, arr[index]);
    
    if (result != -1)
        printf("Element at index %d is %d\n", index, arr[result]);
    else
        printf("Element not found\n");
    
    return 0;
}

        
        
  

