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
}
