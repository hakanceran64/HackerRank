/*
 * @author: Hakan CERAN
 * @date: 06.08.2022
 * @content: Reduant or not
 *
 **/

#include <iostream>
#include <conio.h>
#include <clocale>
#include <windows.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "turkish");
	system("color f9");
	
	int n, temp, sayac = 0;
	bool number_check = false;

	// Olu�turulacak dizi ka� elemanl� olsun?
	cin >> n;

	//	Dizinin olu�turulmas�.
	int array[n];

	// Diziye elemanlar�n girilmesi.
	for (int i = 0; i < n; i++){

		cin >> temp;
		
		// Girilen eleman daha �nce eklendi mi eklenmedi mi?
		for (int j = 0; j < sayac; j++){
			if (array[j] == temp){
				number_check = true;
			}
		}
		
		if (number_check == true){
			cout << "Gereksiz!" << endl;
			number_check = false;
		} else {
			array[sayac] = temp;
			sayac += 1;
			cout << "Say� diziye eklendi!" << endl;
		}
	}
	
	system("PAUSE");
	return 0;
}

