//
// Created by Erick Gomes on 21/05/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "quicksort.h"

int main() {
    int n;
    scanf("%d\n", &n);
    char elements[n+1];
    fgets(elements, sizeof(elements), stdin);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = elements[i] - '0';
    }

    clock_t start = clock();

    quickSortIterative(arr, 0, n - 1);

    clock_t end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printArr(arr, n);

    printf("\nTempo de execução: %f segundos\n", time_taken);

    return 0;
}
