#include <iostream>
using namespace std;

	//struct porodotto con nome ,categoria e prezzo
	struct prodotto{           
	    string nome;
		string categoria;
		float prezzo;	
	};
	
	
	void aggiungi(prodotto p, int d, prodotto p[]){
		
		
	}
	
	
	void visualizza(prodotto p[], int d){
		
	}
	
	
	void cerca(prodotto p,prodotto p[] , int d){
		
	}
	
	bool cancella(prodotto p,prodotto p[] , int d){
	return true;	
	}
	
	bool modifica(prodotto p,prodotto p[] , int d){
		return true;
	}
	
	
int main(){
	
	prodotto p;
	prodotto supermercato[100];
	
	int s;
	
	
	
	
	do{
	cout<<"inserisci il valore di s(1= aggiungi,2=vizualizza,3=cerca,4=cancella,5=modifica)"
	cin>>s;
	
	switch case(s){
	case 1:
	aggiungi(prodotto p, int d, prodotto p[]);
	break;
		case 2:
	visualizza(prodotto p[], int d);
	break;
		case 3:
	cerca(prodotto p,prodotto p[] , int d);
	break;
		case 4:
	cancella(prodotto p,prodotto p[] , int d);
	break;
		case 5:
	modifica(prodotto p,prodotto p[] , int d);
	break;	
	}while(s!=0);
	
}
	

	return 0;

}