#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

void insertion_sort(int* tab, int n){
    int j = 0; int cle = 0; 
    for (int i = 1; i<n; i++){
        cle = tab[i]; //On extrait l'élément actuel 
        j = i-1;    // j pointe sur le dernier élément de la partie triée 
        while (j>=0 && tab[j] > cle){
            tab[j+1] = tab[j]; 
            j--; 
        }
        tab[j+1] = cle; 
    } 

}

int main(void) {
    int tab[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(tab) / sizeof(tab[0]);

    insertion_sort(tab, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}