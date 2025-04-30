#include<stdio.h>

int searching(int angka[], int n, int searchKey){
	int index = -1;
	
	for(int i = 0; i < n; i++){
		if(searchKey == angka[i]){
			index = i;
			break;
		}
	}
	return index;
}


int main(){
	int angka[6] = {23, 24, 46, 12, 45};
	int n = 6;
	int index, searchKey;
	
	printf("Masukkan angka: ");
	scanf("%d", &searchKey);
	getchar();
	
	index = searching(angka, n, searchKey);
	
	if(index = -1){
		printf("Data Tidak Ditemukan\n");
	}
	else{
		printf("%d data ditemukan di %d", searchKey, index);
	}
	
	
	
	return 0;
}
