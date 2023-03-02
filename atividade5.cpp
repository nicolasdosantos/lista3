#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	do {
		
		cout << "Informe o seu numero: ";
		cin >> n;
	
		switch(n){
			
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "o numero 1 corresponde a letra A\n";
			break;
			
			case 2: cout << "o numero 2 corresponde a letra B\n";
			break;
			
			case 3: cout << "o numero 3 corresponde a letra C\n";
			break;
			
			case 4: cout << "o numero 4 corresponde a letra D\n";
			break;
			
			case 5: cout << "o numero 5 corresponde a letra E\n";
			break;
		
		}
	}while (n !=0);
	
}
