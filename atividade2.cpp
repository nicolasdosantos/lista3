#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string a1;
	
	cout << "Informe a letra";
	cin >> a1;
	
	if (a1 == "a" or a1 == "e" or a1 == "i" or a1 == "o" or a1 == "u") {
		cout << "Sua letra "<<a1<< " � vogal";
	}else {
		cout << "Sua letra " <<a1<< " � consoante";
	}
}
