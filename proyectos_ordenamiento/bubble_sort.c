void bubble_ascendente(int arr[], int tamaño){
	int i, j, end;
	for(i = 0; i < tamaño - 1; i++){
		end = 1;
		for(j = 0; j < tamaño - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				end = 0;
				int temp = arr[j];
				arr[j] = arr[j + 1]; 
				arr[j + 1] = temp;
			}
		}
		if(end) break;
	}
}

void bubble_descendente(int arr[], int tamaño){
	int i, j, end;
	for(i=0; i<tamaño - 1; i++){
		end = 1;
		for(j=0; j < tamaño - i - 1; j++){
			if(arr[j] < arr[j + 1]){
				end = 0;
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
