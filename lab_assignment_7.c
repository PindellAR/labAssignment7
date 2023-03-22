#include <stdio.h>
#include <stdlib.h>


// Consider running Bubble Sort on the array shown below. 
// Write a c program to compute the number of swaps needed for each index in the array. 

// 97  16  45  63  13  22  7  58  72

#include <stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j, temp;
    int sw = 0;

    for(i=0; i < n-1; i++){
        sw = 0;
        for (j=0; j < n-i-1; j++){            
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // number of swaps
                sw++;
            }
        }
        printf("pass# %d: %d\n", i+1, sw);
    }
}

int main(){

    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9);

    return 0;
}