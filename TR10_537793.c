#include <stdio.h>
#include <stdlib.h>

int main(){
    // Variáveis que podem ser usadas
    unsigned int x[200];
    int y;
    int z;
    int k;
    int w;
    int j;
    int i;

    //#########################
    for(int i = 0;i<200;i++) x[i] = 0; //setar valor zero em todas casa do vetor
    
    i = 0;
    printf("Digite números entre 0 e 5000: \n");
    
    while(y!=-1){ //repetir enquanto y não for -1
        scanf("%d", &y); //capturar numero digitado
        j = y/32; //encontrar casa do vetor a ser alocado
        if(y>=0&&y<=5000){ //verificar se é igual ou maior que 0 e menor ou igual a 5000
            printf("Digite outro números\n");
            x[j] = x[j] | (1 << (y - (32 * j))); //"soma" o novo bit com o anterior
            if(y>i) i=y; //se y for maior que i, i vira y para saber até qual número foi digitado
        }
        else if(y == -1) printf("Fim!\n");
    }
    y = 0; //define y igual 0
    w = 0; //define w igual 0
    printf("Números Digitados: \n");
    while(y<=i){//se y for menor ou igual a i
        if((x[w]>>(y - (32 * w)))&1) printf("%d\n", y); //verifica se a casa do bit está ocupada, se sim ele printa quantas vezes o y andou para chegar lá
        y++; //y soma mais um
        w = y/32; //encontrar casa do vetor a ser alocado
    }
    //#########################

    return 0;
}