#include<stdio.h>

void movertorre(int casas){
        if(casas>0){
          printf("Cima.\n");
          movertorre(casas-1);
        }
    }
void moverbispo(int casas){
        if(casas>0){
        moverbispo(casas-1);
        }
    }
void moverrainha(int casas){
        if(casas>0){
          printf("Esquerda.\n");
          moverrainha(casas-1);
        }
    }
void movercavalo(int casas){
        if(casas>0){
        movercavalo(casas-1);
        }
    }

int main (){

    int casastorre, casasbispo,casasrainha,direcaocavalo,casascavalo;

    printf("Quantas casas você quer andar para cima com a torre?\n");
    scanf("%d", &casastorre);
    movertorre(casastorre);
    printf("\n");

    printf("Quantas casas você quer andar na diagonal com o Bispo?\n");
    scanf("%d", &casasbispo);
    for (int linha=1;linha<=casasbispo;linha++){
            for (int coluna=1;coluna<=casasbispo;coluna++){
            }
            printf("Direita,\n");
            printf("Cima.\n");
                  }
        moverbispo(casasbispo);
        printf("\n");

printf("Quantas casas você quer andar para a esquerda com a rainha?\n");
    scanf("%d", &casasrainha);
    moverrainha(casasrainha);
    printf("\n");

    printf("Para qual direção você quer andar com o cavalo: \n" );
    printf("1. Para cima.\n");
    printf("2. Para o lado.\n");
    scanf("%d", &direcaocavalo);
    printf("Quantas casas você quer andar nessa direção?\n" );
    scanf("%d", &casascavalo);

    switch(direcaocavalo){
        case 1:
            for (int linha=1;linha<=casascavalo;linha++){
                for (int coluna=1;coluna<=casascavalo;coluna++){
            }
            printf("Cima.\n");
            printf("Cima.\n");
            printf("Direita.\n");
                 }
        movercavalo(casascavalo);
        printf("\n");
        break;
        case 2:
            for (int coluna=1;coluna<=casascavalo;coluna++){
                for (int linha=1;linha<=casascavalo;linha++){
            }
            printf("Direita.\n");
            printf("Direita.\n");
            printf("Cima.\n");
                  }
        movercavalo(casascavalo);
        printf("\n");
        break;
        default:
            printf("Tente uma das 2 opções disponíveis.\n");
    }

return 0;
}