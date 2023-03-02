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
			
			case 1: cout << "estamos no periodo da manhã\n";
			break;
			
			case 2: cout << "estamos no periodo da tarde\n";
			break;
			
			case 3: cout << "estamos no periodo da noite\n";
			break;
		}
	}while (n !=0);
}
			
