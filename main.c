//
// Created by Erick Gomes on 21/05/24.
//

#include <stdio.h>
#include <stdlib.h>

#include "quicksort.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <num_elements> <element1> <element2> ... <elementN>\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = atoi(argv[i + 2]);
    }
    quickSortIterative(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}