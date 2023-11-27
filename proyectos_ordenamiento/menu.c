#include <stdio.h>
#include <stdlib.h>
#include "llenado_impresion_array.c"
#include "bubble_sort.c"
#include "insertion_sort.c"
#include "selection_sort.c"

void seleccion_de_metodo(char metodo[], void metodo_ascendente(int arr[], int tamaño), void metodo_descendente(int arr[], int tamaño), int arr[], int tamaño);

void menu(int* tamaño, int* opcion, int* opcion_metodo){
	do{
		printf("\nBienvenido al menú de métodos de ordenamiento\n1. Continuar\n2. Salir\n");
		scanf("%d", opcion_metodo);

		if(*opcion_metodo == 1){
			printf("\n¿Cuántos valores tiene tu arreglo?: ");
			scanf("%d", tamaño);
			
			int arr[*tamaño];
			llenado_de_array(arr, *tamaño);
			printf("\n¿Con cuál metodo quieres ordenar tu arreglo?\n1. Burbuja\n2. Inserción\n3. Selección\n");
			
			scanf("%d", opcion);
			switch(*opcion){
				case 1:
					seleccion_de_metodo("burbuja", bubble_ascendente, bubble_descendente, arr, *tamaño);
					break;
				case 2:
					seleccion_de_metodo("inserción", insertion_ascendente, insertion_descendente, arr, *tamaño);
					break;
				case 3:
					seleccion_de_metodo("selección", selection_ascendente, selection_descendente, arr, *tamaño);
					break;
				default:
					printf("\nOpción no disponible\n");
					break;
			}
		} else if(*opcion_metodo == 2){ printf("\n¡Hasta luego!\n"); continue; } else{ printf("\nOpción no disponible\n"); continue;}	
	} while(*opcion_metodo != 2);
}

void seleccion_de_metodo(char metodo[], void metodo_ascendente(int arr[], int tamaño), void metodo_descendente(int arr[], int tamaño) ,int arr[], int tamaño){
	int menor_mayor;
	printf("\n¿Quieres ordenarlo de menor a mayor o de mayor a menor?\n1. Menor a mayor\n2. Mayor a menor\n");
	scanf("%d", &menor_mayor);
	if(menor_mayor == 1){
		printf("\n--- Arreglo ordenado por el metodo %s ---\n", metodo);
		metodo_ascendente(arr, tamaño);
		impresion_de_array(arr, tamaño);
	} else{
		printf("\n--- Arreglo ordenado por el metodo %s ---\n", metodo);
		metodo_descendente(arr, tamaño);
		impresion_de_array(arr, tamaño);
	}

}
