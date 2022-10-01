#include <stdio.h>
#include <stdlib.h>



void saisirm(char m[5][5], int n){
    int i, j;
    for (i=0; i<n; i++){
        if(i%2==1)
            for(j=0; j<n; j++){
                if(j%2==0)
                    m[i][j]='_';

            }
    }

    for (j=0; j<n; j++){
        if(j%2==1)
            for(i=0; i<n; i++){
                m[i][j]='|';
            }
    }
}
void initialiser(char m[5][5],int n){
        int i,j;
        for (i=0; i<n; i++)
        for(j=0; j<n; j++)
            m[i][j]=' ';
        }


void afficher(char m[5][5], int n){
    int i,j;
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%c",m[i][j]);
        }
    printf("\n");
    }
}

