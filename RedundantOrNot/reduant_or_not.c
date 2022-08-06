/*
 * @author: Hakan CERAN
 * @date: 06.08.2022
 * @content: Reduant or not
 *
 **/

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "turkish");
	system("color f9");
	
	int i, j;
	int n, temp, sayac = 0;
	bool number_check = false;

	// Oluþturulacak dizi kaç elemanlý olsun?
	scanf("%d", &n);

	//	Dizinin oluþturulmasý.
	int array[n];

	// Diziye elemanlarýn girilmesi.
	for (i = 0; i < n; i++){

		scanf("%d", &temp);
		
		// Girilen eleman daha önce eklendi mi eklenmedi mi?
		for (j = 0; j < sayac; j++){
			if (array[j] == temp){
				number_check = true;
			}
		}
		
		if (number_check == true){
			printf("Gereksiz!\n");
			number_check = false;
		} else {
			array[sayac] = temp;
			sayac += 1;
			printf("Sayý diziye eklendi!\n");
		}
	}
	
	system("PAUSE");
	return 0;
}

