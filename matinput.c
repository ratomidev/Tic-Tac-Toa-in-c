#include <stdio.h>
#include <stdlib.h>

void saisir(char m[5][5], int n){
    int i=-1,x,y;
    do {
        i++;

            do {
                printf("cout N %d\n",i);
                scanf("%d %d",&x,&y);
                if(x==1&&y==1) {
                    x=0;
                    y=0;
                };
        if(x==1&&y==2){
        x=0;
        y=2;
        };

        if(x==1&&y==3){
        x=0;
        y=4;
        };

        if(x==2&&y==1){
        x=2;
        y=0;
    };
        if(x==2&&y==2){
        x=2;
        y=2;
    };
        if(x==2&&y==3){
        x=2;
        y=4;
    };
        if(x==3&&y==1){
        x=4;
        y=0;
    };
        if(x==3&&y==2){
        x=4;
        y=2;
    };
        if(x==3&&y==3){
        x=4;
        y=4;

    }}while(m[x][y]!=' ');

    if(!(i%2))
        m[x][y]='x';
    else
        m[x][y]='o';
    printf("\n");
    system("cls");
    afficher(m,5);

    }while(!veriftotale(m)&& i<8);

    if(veriftotale(m))
        if(!(i%2))
            printf("Felicitations X, you have won");
        else
            printf("Felicitations O, you have won");
        else
            printf("THE MATCH IS DRAW, try another time.\n");
}
