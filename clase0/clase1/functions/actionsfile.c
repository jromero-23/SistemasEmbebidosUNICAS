#include "../headers/actionsfile.h"
#include <stdio.h>
#include <stdlib.h>
#include "../headers/constant.h"

void GenerateMessage(){
    system("type nul > saludo.txt");
    FILE *fp = fopen("saludo.txt","w+");
    fprintf(fp, SALUDO);
    fputs(COMPLEMENTO, fp);
    fclose(fp);
    system("code saludo.txt");

}
