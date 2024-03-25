#include <stdio.h>

int main(int argc, char *argv[]) {

	char nombre [20];
	printf("ingresa tu nombre\n");
	fgets(nombre,sizeof (nombre),stdin);
	printf("%s",nombre);
	
	
	
	return 0;
}

