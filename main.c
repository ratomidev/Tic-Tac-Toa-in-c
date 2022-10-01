#include <stdio.h>
#include <stdlib.h>
#include "verification.c"
#include "matoperation.c"
#include "matinput.c"




int main(){

    char m[5][5];
    initialiser(m,5);
    saisirm(m,5);
    afficher(m,5);
    saisir(m,5);

    return 0;
}
