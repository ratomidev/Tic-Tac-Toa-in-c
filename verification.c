#include <stdio.h>
#include <stdlib.h>

#define t 5

int verifh(char m[t][t], int n,char c){
    int i=0,j=0,d=0;
    char aux=c;
    for(i=0; i<n; i+=2){
        for(j=0; j<n; j+=2){
            if(aux==m[i][j])
                d=1+d;
         }
    if(d==3)
            return 1;
        d=0;
        j=0;
    }
    return 0;
    }

int verifv(char m[t][t], int n,char c){
    int i=0,j=0,d=0;
    char aux=c;
    for(j=0; j<n; j+=2){

        for(i=0; i<n; i+=2){
            if(aux==m[i][j])
                d=1+d;
        }
        if(d==3)
            return 1;
        d=0;
        i=0;
    }
    return 0;
    }

int verifd1(char m[t][t], int n, char c){
    int i,d=0;
    char aux=c ;
    for(i=0; i<n; i+=2){
        if(aux==m[i][i])
            d++;
    }
    if(d==3)
        return 1;
    return 0;
    }

int verifd2(char m[t][t], int n, char c){
    int i,j, d=0;
    char aux=c;
    for (i=0, j=n-1; i<n,j>=0; i+=2,j-=2){
            if(m[i][j]==aux)
                d++;

            }
    if(d==3)
        return 1;
    else
        return 0;


    }

int veriftotale(char m[t][t]){
    return(verifd1(m,5,'x')
           || verifd2(m,5,'x')
           || verifv(m,5,'x')
           || verifh(m,5,'x')
           || verifd1(m,5,'o')
           || verifd2(m,5,'o')
           || verifv(m,5,'o')
           || verifh(m,5,'o'));
}
