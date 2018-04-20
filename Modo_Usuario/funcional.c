#include "../Modo_Lib/myLib.h"
#include "funcional.h"

int main(){
    int op,ini = 0,fim;
    int valida = 0; //modo usuário
    char txt[10], resp;
    while(op != 0){
        interface();
        scanf("%d", &op);
        fflush(stdin);

        if(op == 1){
            printf("\nDeseja ler ate uma posicao especifica ? [s/n]");
            scanf("%c", &resp);
            if(resp == 's' || resp == 'S'){
                printf("\nAte onde gostaria de ler ?   ");
                scanf("%d", &fim);
                chamada_leituraTam(ini, fim, valida);
            }
            if(resp == 'n' || resp == 'N'){
                chamada_leitura(valida);
            }
        }
        else if(op == 2){
            printf("Insira o conteudo a ser gravado: \n");
            gets(txt);
            chamada_escrita(txt,valida);
        }
        else if(op == 0){
            break;
        }
    }
}
