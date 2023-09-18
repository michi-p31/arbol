#include <iostream>
#include<conio.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo*izquierda;
	Nodo*derecha;	
};
void insertarArbol(Nodo*&,int);
Nodo*crearNodo(int);
Nodo *arbol=NULL;
int main() {
	int dato;
	cout<<"Digite numero  ";
	cin>>dato;
	insertarArbol(arbol,dato);
	cout<<"Digite numero  ";
	cin>>dato;
	insertarArbol(arbol,dato);
	getch();
	return 0;
}
    
Nodo *crearNodo(int n){
    Nodo*nuevo_nodo=new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->derecha=NULL;
    nuevo_nodo->izquierda=NULL;
    return nuevo_nodo;
}
void insertarArbol(Nodo*&arbol,int n){ 
 Nodo*nuevo_nodo=new Nodo();
   if (arbol==NULL){
   	Nodo*nuevo_nodo=crearNodo(n);
   	arbol=nuevo_nodo;
   }else{
   	int Raiz=arbol->dato;
   	    if(n<Raiz){
   	    	insertarArbol(arbol->izquierda,n);
		   }else{
		   	insertarArbol(arbol->derecha,n);
		   }
   }


}
