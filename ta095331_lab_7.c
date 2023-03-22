#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void bubbleSort(int arr[], int n)
{
    int i, j ,temp;
    int num_swaps =0;
    for (i = 0; i < n-1; i++) {

        printf("\nNumber of Swaps: %d", num_swaps);
        num_swaps = 0;
        for(j=0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                num_swaps++;
            }
        }
    }
    /*for (i = 0; i <n-1; i++)
        printf("%d  ", arr[i]);*/
}

int main () {

    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9);
    return 0;

}
