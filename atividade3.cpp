#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float n1;
	
	cout <<"Informe o n�mero";
	cin >> n1;
	
	if(n1 >0){
		cout << "Seu n�mero � positivo";
	}
	
	if(n1 < 0){
		cout << "Seu n�mero � negativo";
	}
	
	if(n1 == 0){
		cout << "Seu n�mero � neutro";
	}
}
