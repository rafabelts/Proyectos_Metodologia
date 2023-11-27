#include <stdio.h>

void llenado_de_array(int arr[], int tamaño){
	for(int i=0; i<tamaño; i++){
		printf("Ingresa el %d° valor: ", i+1);
		scanf("%d", &arr[i]);
	}
}

void impresion_de_array(int arr[], int tamaño){
	for(int i=0; i<tamaño; i++){
		printf("%d\n", arr[i]);
	}
}
