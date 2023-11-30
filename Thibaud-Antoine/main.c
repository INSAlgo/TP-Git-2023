#include <stdio.h>
#include "fonctions.h"

int main(){
    printf("Hello INSA ! Bonjour le monde ! AAAAAA\n");
    int a = 3, b = 1;
    printf("La somme de %d et %d vaut %d\n",a,b,addition(a,b));
    printf("La différence entre %d et %d vaut %d\n",a,b,soustraction(a,b));
    nom_binome();
    return 0;
}