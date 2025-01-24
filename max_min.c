 // For INT_MIN and INT_MAX
#include <limits.h> 
#include <stdio.h>

void max_min(int size, int arr[], int *max, int *min) {
    *max = INT_MIN;*min = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > *max) {

            *max = arr[i];

        }
        if (arr[i] < *min) {
           
            *min = arr[i];
     
     
        }
    }
}

int main() {
   
    int arr[] = {10, 230, 4, 31, 430, 23, 114, 0};

    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    max_min(size, arr, &max, &min);

    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
    return 0;
}