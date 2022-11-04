#include <stdio.h>
#include <stdlib.h>


#include "frontend.h"

int main(int argc, char *argv[]){

int i,fd;

fd=open("teste.bin",O_CREAT | O_TRUNC | O_WRONLY, 0655);

if(fd>0){

	printf("O meu pid é: %d.\n",getpid());
	printf("Inicio...\n");
	for(i=0; i<10;i++){
		printf("+");
		fflush(stdout);
		sleep(2);
	}

	printf("FIM\n");

	write(fd,"1 carro a 100 300 20 Pedro Mike",50);
	write(fd, &i,sizeof(int));
	close(fd);

}

exit(3);

}
