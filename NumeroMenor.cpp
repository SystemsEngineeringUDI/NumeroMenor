/*
@autor:
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <iostream>
using namespace std;
int main(){
int V[5]={0,6,3,9,1},men,i;
men=V[1];//Se define como numero menor aun digito del vector 
for(i=0;i<=5;i++){//se recorre el vector 
	if(men>V[i]){//se compra cada uno de los terminos del vector 
		men=V[i];
	}
}
cout<<"El numero menor es: "<<men;
}
