#include <stdio.h>


// kaç tane ölü olduðunu kontrol edecek
int control(int list[],int size){
		
	
	int zero_counter = 0;
	
	for(int i = 0; i < size; i++){
		
		if(list[i] == 0)
			zero_counter++;
			
	}
	
	
	if(zero_counter == size - 1)
		return 1;
	
	
	return 0;
	
}

// kaçýncý indeksteki elemanýn olduðunu söyleyecek
int find_last_person(int list[],int size){
	
	int result = 0;
	
	for(int i = 0; i < size; i++){
		
		if(list[i] != 0){
			result = i;
			break;
		}
			
	}
	
	return result;
}

int find_alive(int list[], int size, int i){
	// sondaki elemansa en baþtan kontrol ediyoruz hayatta kalaný
	if(i == size-1){
		for(int l = 0; l < size; l++){
			if(list[l] != 0){
				i = l;
				break;
			}
		}
	}
	// sonraki hayatta kalan insana fýrla
	for(int j = i; j < size; j++){

		// kendisinden sonra hayatta kalaný buluyor
		if(list[j] != 0){
			i = j;
			break;
		}
		// eðer kendisinden sonra hayatta kalan yoksa en baþtan kontrol edecek hayatta kalanlarý
		if(j == size-1){
			for(int k = 0; k < size; k++){
				if(list[k] != 0){
					i = k;
					break;
				}
			}
		}
	}
	
	return i;
}

int ahmetus(int n){
	
	if(n <= 0)
		return -1;
	
	// hayatta kalan eleman  // eðer liste eleman sayýmýz en az 1 se ilk elemaný hayatta kalmýþ gibi eþleþtiriyoruz
	int result = 1;
	
	// listemizi oluþturuyoruz	
	int list[n];
		
	for(int i = 0; i < n; i++){
		list[i] = i + 1;
	}	
	
	printf("> Ilk hayattaki eleman: %d\n",list[0]);
	int i = 1;
	while (1){
		
		// tek bir kiþi kalmýþsa döngüyü bitirecek
		if(control(list,n)){
			
			int alive = find_last_person(list,n);
			
			result = list[alive];
			
			break;
		}
			
		
				
		if(list[i] != 0){
			// ölen kiþi
			
			printf(" --- %d was killed --- \n\n",list[i]);
			
			list[i] = 0;
			
			i = find_alive(list,n,i);
			
			
			printf("> Sonraki hayatta kalan eleman: %d\n",list[i]);
		}
		
		// hayatta kalan insandan sonraki elemana fýrladýk
		i++;
		
		// i kontolden çýkmamasý için gereken kontrol kýsmý eðer sýnýrý aþarsa baþa dönecek (gerekli!)
		if(i == n){
			i = 0;
		}		
	}
	
	return result;
}



main(){
		
	printf("\n--------------------------------\n Son hayatta kalan eleman : %d",ahmetus(5));	
	
}