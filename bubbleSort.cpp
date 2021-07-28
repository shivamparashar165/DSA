void buubleSort(int arr[], int n){
	for(int i=0; i<n; i++){
		bool swapped = false;
		for(int j=0; j<n-i-1; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				swapped = true;
			}
		}
		if(swapped == false){
			break;
		}
	}
}
