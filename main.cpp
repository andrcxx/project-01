#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float n1,n2,soma; //vari�veis para o primeiro n�mero e segundo n�mero
	
	cout<<"Digite o primeiro numero"<<endl;  //conectando o n�mero 1 digitado � vari�vel criada.
	cin>>n1;
	cout<<"Digite o segundo numero"<<endl;  //conectando o n�mero 2 digitado � vari�vel criada.
	cin>>n2;
	
	soma=n1+n2;       //soma d� vari�vel n1 e v�riavel n2.
	
	if (soma <=20 ) // se a v�riavel soma for menor ou igual � 20 ele responde assim.
	  {
	  	cout<< "Soma menor ou igual a 20";
	    }
	else // se n�o for menor ou igual � 20 ele responde assim.
	  {
	  	cout<< "Soma maior que 20"<<endl;
	    }
	
	system("pause");
	return 0;
}
