#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>

void bubble_sort(int* tab, int taille){
    for(int j=0; j<taille-1; j++){
        for(int i=0; i<taille-1-j; i++){
            if(tab[i] > tab[i+1]){
                int buff = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = buff;
            }
        }
    }
}

void print_tab(int* tab, int taille){
        for (int i = 0; i<taille; i++){
            printf("%d\n", tab[i]); 
        }
    }
/// Phase de test /// 
int main(){
    int t1[] = {2, 3, 1, 4}; 
    int taille = 4; 

    
    bubble_sort(t1, taille); 
    print_tab(t1, taille); 
    return 0; 
}
