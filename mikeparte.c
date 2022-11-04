#include <stdio.h>
#include <string.h>

#define SELL "sell"

int main(int argc, char **argv) {
    char comando[100];
    char *del = " ";
    char *token;

    printf("Comando: ");
    fgets(comando,sizeof(comando),stdin);


    token = strtok(comando, del);
    printf("token:%scomando:%s", token,comando);
    
    while( token != NULL ) {
    if(strcmp(token,SELL)==0){
        printf( " %s\n", token );
        token = strtok(NULL, del);
    }
}
    return 0;
}