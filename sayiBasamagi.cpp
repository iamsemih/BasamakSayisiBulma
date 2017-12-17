#include <iostream>

using namespace std;

unsigned int basamakBul(int x){
	unsigned int basamakSayisi=0;
	while(x>0){
		x/=10;
		basamakSayisi++;
	}
	return basamakSayisi;
}

int main(){
	int sayi, temp=0;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	system("cls");
	if (sayi<0){
		temp=sayi*(-1);
	}else{
		temp=sayi;
	}
	cout << sayi << ", " << basamakBul(temp) << " basamakli bir sayidir.\n\n\n";
	system("pause");
	return 0;
}
