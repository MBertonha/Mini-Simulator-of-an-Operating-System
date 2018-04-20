#include <stdio.h>
#include <conio.h>
#include "rotinaLib.h"

void chamadaGravar(char txt[], int valida){
    gravar(txt, valida);
}
void chamadaAbrir(int valida){
    abrirArquivo(valida);
}
void chamadaAbrirTam(int ini, int fim, int valida){
    abrirArquivoTam(ini,fim, valida);
}
