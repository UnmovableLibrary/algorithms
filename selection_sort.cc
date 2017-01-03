#include <algorithm> //for std::swap

void selection_sort(int array[], int n){
	int minIndex;
	
	for (int i = 0; i < n - 1; ++i){
		minIndex = i;
		for (int j = i + 1; j < n; ++j){
			if (array[j] < array[minIndex]) //if 
				minIndex = j;
			if (minIndex != i) {
				std::swap(array[i], array[minIndex]);
			}
		}
		
	}
	
}

//the running time of the algorithm is theta n^2 for all cases