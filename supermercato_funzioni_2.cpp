#include <iostream>
#include <string>
using namespace std;
//strutture e funzioni
struct prodotto{
	string nome;
	string categoria;
	float prezzo;	
};

void aggiungi(prodotto pp, prodotto ele[],int &dim){
	ele[dim]=pp;
	dim++;	
}

string visualizza(prodotto ele[], int dim){
	string s;
	for(int i=0;i<dim;i++){
		s+=ele[i].nome+"\t";
		s+=ele[i].categoria+"\t";
		s+=to_string(ele[i].prezzo)+"\n";
	}
	return s;
}

int cerca(,prodotto p[] , int d){
	for(int i=0; i<d; i++){
		if(p[i].nome==nome){
			return i;
		}
	}
		
	}
	
	void cancella(prodotto p,prodotto p[] , int d){
	string nome;
	cout<<"inserire il nome del prodotto da elimnare";
	getline(cin,nome);
	for(int i=0, i<d;i++){
		if(p[i].nome==nome){
		for(int j=0; j<d;j++){
		p[j]=0;
		cout<<"prodotto eliminato";
		
		}	
		}
	}	

	
	}
	
	bool modifica(prodotto p,prodotto p[] , int d){
		return true;
	}
	

int main(){
//dichiarazioni delle variabili
prodotto  p;
prodotto elenco[100];
int n=0;

//struttura a menù
int scelta;
do{
//visualizzazione opzioni
cout<<"1 - (C)Aggiunta"<<endl;
cout<<"2 - (R)Visualizzazione"<<endl;
cout<<"3 - (C)Aggiunta"<<endl;
cout<<"4 - (R)Visualizzazione"<<endl;
cout<<"5 - (C)Aggiunta"<<endl;
///------
cout<<"0 - Fine programma"<<endl;
//scelta dell'opzione
cout<<"scegli l'opzione";

cin>>scelta;
fflush(stdin);
//elaborazione scelta
switch(scelta){
	case 1:
		cout<<"Inserisci il nome ";
		getline(cin,p.nome);
		cout<<"Inserisci la categoria ";
		getline(cin,p.categoria);
		cout<<"Inserisci il prezzo ";
		cin>>p.prezzo;
		aggiungi(p,elenco,n);
		break;
	case 2: 
		
	    cout<<visualizza(elenco,n);
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
	
}
}
while (scelta!=0);
	
}
