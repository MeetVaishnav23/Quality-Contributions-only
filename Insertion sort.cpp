void insertion(int arr[], int n){
  
  for(int i=1;i<n;i++){ 
    
	    int temp = arr[i]; 
	    int j = i-1;       
    
	    while(j >= 0 && arr[j] > temp){ 
	        arr[j+1] = arr[j];
	        j--;
	    }
    
	    arr[j+1] = temp; 
	}
  
	for(int i=0;i<n;i++){
	    cout << arr[i] << endl;
	}
}
