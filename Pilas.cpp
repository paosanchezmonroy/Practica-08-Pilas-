//Pilas
//Agregar numeros enteros como el usuario quiera y mostrarlo
#include <iostream>
#include <conio.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void AgregarPila(nodo *&pila, int n){
	nodo *nuevo=new nodo();
	nuevo->dato=n;
	nuevo->siguiente=pila;	
	pila=nuevo;
	cout<<"\t Elemento: "<<n;
}
void mostrarpila(nodo *&pila){
	
	cout<<"Mostrar pila: "<<pila->dato<<endl;
}
void SacarPila(nodo *&pila){
	nodo *aux = pila;
	pila = aux->siguiente;
	delete aux;	
}

int main(){
	nodo *pila=NULL;
	char rpt;
	int dato;
	
	do{
	cout<<"Ingresa los datos: ";
	cin>>dato;
	AgregarPila (pila,dato);	 
	cout<<" \n ¿Desea Agregar otro dato? "<<endl;
	cout<<" \nSeleccione (s,n)";
	cin>>rpt;
	}while((rpt=='s')||(rpt=='S'));
	mostrarpila(pila);
	
	cout<<"Sacar los Elementos de la pila: "<<endl;
		SacarPila(pila); 
		if(pila != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<" . ";
		}
	
	getch();	
	return 0;
}
