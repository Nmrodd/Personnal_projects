#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

void merge(int* tab, int* left, int left_size, int* right, int right_size) {
    int i = 0; 
    int j = 0; 
    int k = 0; 
    // Compare les éléments un par un et les remet dans tab dans le bon ordre
    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            tab[k++] = left[i++];
        } else {
            tab[k++] = right[j++];
        }
    }
    // Copie les éléments restants de left s'il y en a
    while (i < left_size) {
        tab[k++] = left[i++];
    }
    // Copie les éléments restants de right s'il y en a
    while (j < right_size) {
        tab[k++] = right[j++];
    }
}

void merge_sort(int* tab, int n) {
    if (n <= 1) {
        return;
    }
    int mid_n = n / 2;
    int left_size = mid_n;
    int right_size = n - mid_n;
    int* left_t = malloc(left_size * sizeof(int));
    int* right_t = malloc(right_size * sizeof(int));
    for (int i = 0; i < left_size; i++) {
        left_t[i] = tab[i];
    }
    for (int i = 0; i < right_size; i++) {
        right_t[i] = tab[mid_n + i]; // Décale l'indice de tab
    }

    merge_sort(left_t, left_size);
    merge_sort(right_t, right_size);

    merge(tab, left_t, left_size, right_t, right_size);

    free(left_t);
    free(right_t);
}
