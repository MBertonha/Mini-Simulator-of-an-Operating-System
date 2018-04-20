#include "../Modo_Nucleo/rotina.c"

void chamada_escrita(char txt[], int valida){
    system("cls");
    chamadaGravar(txt, valida);
}
void chamada_leitura(int valida){
    system("cls");
    chamadaAbrir(valida);
}
void chamada_leituraTam(int ini, int fim, int valida){
    system("cls");
    chamadaAbrirTam(ini, fim, valida);
}
