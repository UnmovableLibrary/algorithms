void insertion_sort( int array[], int n){
	int temp, j;

	for(int i = 1, i < n; ++i){
		j = i;
	
		while(j > 0 && array[j-1] > array[j]){
			temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
			j—;
		}
	}

}


//worst-case running time: Θ(n^2)