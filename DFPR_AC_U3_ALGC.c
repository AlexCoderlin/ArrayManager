/*
* Por: Alejandro Gonzalez Colin
* Ingenieria en Desarrollo de Sofotware
*/
#include <stdio.h>
#include <stdlib.h>
#define max 5

int items=0, c;
int Matrix[1][max]; // Array bidimencional

//Prototipado de funciones
void reg();
void imp();
int may();

/*------------------- Funcion Principal ------------------------*/
void main() {
    system("cls");
    int m;
    while(c != 'q' && c != EOF) {
    	printf("\n\t Desarrollado con <3 por: Alejandro Gonzalez Colin\n\n");
        printf("\n\t >> MENU DE GESTOR DE ARREGLO BIDIMENCIONAL (1x5)<<\n\n");
        printf("\n\t  1. Agregar elemento");
        printf("\n\t  2. Imprimir Arreglo");
        printf("\n\t  3. Obtener Mayor");
        printf("\n\t  q: Salir.\n\n");
        printf("\n Haga una seleccion: ");
        c = getchar();

        switch(c) {
            case '1':
                while(getchar() != '\n');
                reg();
                break;
            case '2':
                while(getchar() != '\n');
                imp();
                break;
            case '3':
                while(getchar() != '\n');
                system("cls");
                m = may();
                printf("\n\n\tValor mayor en arreglo: %d\n\n", m);
                system("pause");
                break;
            default:
                system("cls");
                break;  // Salimos del programa.
        }
  } 
}

/*------------------- Funcion Registrar ------------------------*/
void reg() { // sin parametros.
    system("cls");
    int aux;
	if(items<max){
        printf("\n\n\tIngresa valor: ");
        scanf("%d", &Matrix[0][items]);
        fflush(stdin);
        puts("\n\t** Agregado Correcto **\n");
        items += 1;
    }
    else{
        puts("\n\n\t** Arreglo esta lleno, no se pueden agregar mas datos. **\n\n");
    }
    system("pause");
    return main();
}
/*------------------- Funcion Imprimir ------------------------*/
void imp() { // sin parametros.
    system("cls");
    int i;
    if(items<1){
        puts("\n\n\t** Arreglo esta vacio por el momento. **\n");
    }
    else{
        printf("\n\tDatos en arreglo: ");
        for( i=0; i<items; i++){
            printf("%d, ", Matrix[0][i]);
        }
    }
    printf("\n\n\n");
    system("pause");
    return main();
}
/*------------------- Funcion Mayor ------------------------*/
int may() { // sin parametros.
	int M=0, i;

	for (i = 0; i < items; i++)
	{
		if (Matrix[0][i] > M){
		 	M = Matrix[0][i];
		}
	}
    return M;
}
