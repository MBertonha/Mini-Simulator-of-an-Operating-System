#include <stdio.h>
#include <conio.h>


void testarAbrirArquivo(FILE *arq){
  if (arq == NULL){  // Se houve erro na abertura
     printf("Erro na abertura do arquivo\n");
     return;
  }
  else{
    //printf("Aberto com sucesso\n\n");
  }

}

void abrirArquivoTam(int ini, int fim, int valida){
  FILE *arq;
  valida = 1;
  char Linha[100];
  char *result;
  int i,tamanho;

  arq = fopen("../Modo_Nucleo/arq_bits.txt", "r");
  testarAbrirArquivo(arq);
  i = 1;

  fseek(arq, ini, SEEK_SET);
  tamanho = fim - ini;

  char escrita[tamanho];
  fread(escrita, 1, sizeof(char)*tamanho, arq);
  fwrite(escrita, 1, sizeof(char)*tamanho, stdout);

  printf("\n\n");
  fclose(arq);
  system("pause");
  system("cls");
}

void abrirArquivo(int valida){
  valida = 1;
  FILE *arq;
  char Linha[100];
  char *result;
  int i;

  arq = fopen("../Modo_Nucleo/arq_bits.txt", "r");
  testarAbrirArquivo(arq);
  i = 1;

  while (!feof(arq)){
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
	  printf("%s",Linha);
  }
  printf("\n\n");
  fclose(arq);
  system("pause");
  system("cls");
}

void gravar(char txt[], int valida){
    FILE *arq;
    valida = 1;
    arq = fopen("../Modo_Nucleo/arq_bits.txt", "a");  // Cria um arquivo texto para gravação
    testarAbrirArquivo(arq);

    fprintf(arq, txt);
    fclose(arq);

    system("cls");
    printf("\nGravado com sucesso..\n");
    abrirArquivo(valida);
    system("pause");
    system("cls");
}
