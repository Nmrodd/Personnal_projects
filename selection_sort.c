#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

void selection_sort(int* tab, int n){
    for(int i = 0; i<n; i++){
        int min_act = tab[i]; //On met le min_act au premier élément à droite du ième élément
        int ind_min = i; 
        for(int j=i+1; j<n; j++){
            if(tab[j]<min_act){
                min_act = tab[j]; 
                ind_min = j;
            }
        } 
        int buff = tab[i]; 
        tab[i] = min_act; 
        tab[ind_min] = buff; 
    }
}

void print_tab(int* tab, int taille){
        for (int i = 0; i<taille; i++){
            printf("%d\n", tab[i]); 
        }
}

int main(){
    int t1[] = {2, 3, 1, 4}; 
    int taille = 4; 

    
    selection_sort(t1, taille); 
    print_tab(t1, taille); 
    return 0; 
}
