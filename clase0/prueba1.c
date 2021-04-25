#include <stdio.h>
#include <stdlib.h>

#define SALUDO "Bienvenido al curso de Sistemas Embebidos \n"
#define COMPLEMENTO "FIEE UNI CAS"


int main(){

    system("type nul > Saludo.txt");
    FILE *fp;
    fp =fopen("Saludo.txt","w+");
    fprintf(fp,SALUDO);
    fputs(COMPLEMENTO, fp);
    fclose(fp);
    system("code Saludo.txt");
    return 0;
}