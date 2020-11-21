#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float n1,n2,soma; //variáveis para o primeiro número e segundo número
	
	cout<<"Digite o primeiro numero"<<endl;  //conectando o número 1 digitado á variável criada.
	cin>>n1;
	cout<<"Digite o segundo numero"<<endl;  //conectando o número 2 digitado á variável criada.
	cin>>n2;
	
	soma=n1+n2;       //soma dá variável n1 e váriavel n2.
	
	if (soma <=20 ) // se a váriavel soma for menor ou igual á 20 ele responde assim.
	  {
	  	cout<< "Soma menor ou igual a 20";
	    }
	else // se não for menor ou igual á 20 ele responde assim.
	  {
	  	cout<< "Soma maior que 20"<<endl;
	    }
	
	system("pause");
	return 0;
}
