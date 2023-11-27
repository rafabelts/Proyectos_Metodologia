void selection_ascendente(int arr[], int tamaño){
	int i, j, menor, k;
	for(i=0; i<tamaño-1; i++){
		menor = arr[i];
		k = i;
		for(j = i + 1; j < tamaño; j++){
			if(arr[j] < menor) {
				menor = arr[j];
				k = j;
			}
		}
		arr[k] = arr[i];
		arr[i] = menor;

	}
}

void selection_descendente(int arr[], int tamaño){
	int i, j, mayor, k;
	for(i=0; i<tamaño; i++){
		mayor = arr[i];
		k = i;
		for(j = i + 1; j < tamaño; j++){
			if(arr[j] > mayor){
				mayor = arr[j];
				k = j;
			}
		}
		arr[k] = arr[i];
		arr[i] = mayor;
	}
}
