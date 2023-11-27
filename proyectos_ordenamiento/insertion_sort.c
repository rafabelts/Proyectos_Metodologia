void insertion_ascendente(int arr[], int tamaño){
	int i, key, j;
	for(i = 1; i < tamaño; i++){
		key = arr[i];
		j = i - 1;
		while(j >= 0 && key < arr[j]){
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key; 
	}
}


void insertion_descendente(int arr[], int tamaño){
	int i, key, j;
	for(i = 1; i < tamaño; i++){
		key = arr[i];
		j = i - 1;
		while(j >= 0 && key > arr[j]){
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
	}
}
