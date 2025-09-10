#include <iostream>
using namespace std;
int main(){
  cout<<"Hello World";
  cout<<"Digita due numeri separati da spazio, quindi premi INVIO"<<endl;
  int n1, n2;
  cin>>n1>>n2;
  cout<<"Scegli quale operazione svolgere: \n1. Somma\n2. Sottrazione\nScelta: ";
  int risposta;
  cin>>risposta;
  if(risposta == 1){
	cout<<"Somma: "<<n1+n2;
  }else if(risposta == 2){
	cout<<"Sottrazione: "<<n1-n2;
  }else{
	cout<<"Scelta non valida.";
  }
  
}
