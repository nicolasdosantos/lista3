#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL,"Portuguese");
	int numero,qtd;	
	
	cout << "informe o numero para tabuada";
	cin >> numero;
	
	cout << "informe até quantos numeros é pra ir";
	cin >> qtd;
	
	for (int x = 0; x <= 10; x++){
		cout << 10 << "x" << x << "=" << 10 * x << endl;
}
}
