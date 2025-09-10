#include <iostream>
#include <string>
using namespace std;
int main(){
  cout<<"Hello World"<<endl;
  cout<<"Vuoi scartare un biscotto della fortuna? ";
  string risposta;
  cin>>risposta;
  if(risposta == "SI" || risposta == "si" || risposta == "Si"){
	cout<<endl<<"Se cent'anni campare vuoi, fatti sempre i fatti tuoi";
  }else{
	cout<<endl<<"No problem, arrivederci";
  }
  cout<<"Digita due numeri separati da spazio, quindi premi INVIO"<<endl;
  int n1, n2;
  cin>>n1>>n2;
  cout<<"Scegli quale operazione svolgere: \n1. Somma\n2. Sottrazione\nScelta: ";
  int scelta; //era risposta, cambiato come suggerito nella review
  cin>>risposta;
  if(scelta == 1){	//era risposta, cambiato come suggerito nella review
	cout<<"Somma: "<<n1+n2;
  }else if(scelta == 2){	//era risposta, cambiato come suggerito nella review
	cout<<"Sottrazione: "<<n1-n2;
  }else{
	cout<<"Scelta non valida.";
  }
}
