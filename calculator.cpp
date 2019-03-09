#include <iostream>
#include <cmath>

using namespace std;

float a,b;
char act;

float sum(float,float){
	float out = a+b;			//suma
	cout<<a<<" + "<<b<<" = "<<out;	
}

float roz(float,float){
	float out = a-b;			//roznica
	cout<<a<<" - "<<b<<" = "<<out;	
}

float dziel(float,float){
	float out = a/b;			//dzielenie
	cout<<a<<" / "<<b<<" = "<<out;	
}

float mnoz(float,float){
	float out = a*b;			//mnozenie
	cout<<a<<" * "<<b<<" = "<<out;	
}

float pierw(float){
	cout<<sqrt(a);				//pierwiastek
}

float pot(float, float){
	cout<<pow (a, b);			//potega
}

void zmienne(float, float){
	cout<<endl;
	cout<<"Podaj pierwsza liczbe: "<<endl;
	cin>>a;									//rozpoznawanie strumienia wejsciowego
	cout<<endl;								//wykluczanie liczb z puli zmiennych
	if(cin.good()){
		cout<<"Podaj druga liczbe: "<<endl;
		cin>>b;
		cout<<endl;
		if(cin.fail()){
			cout<<"ERROR -podano litere !!!"<<endl;
			cout<<"sprobuj ponownie"<<endl;
			cin.clear();
		}
		
		}else{
			cout<<"ERROR -podano litere !!!"<<endl;
			cout<<"sprobuj ponownie"<<endl<<endl;
			cin.clear();
		}
}

void var_pierw(float){
	cout<<endl;
	cout<<"Podaj pierwsza liczbe: "<<endl;
	cin>>a;
	if(cin.fail()){										//to samo co wyzej tylko dla pierwiastka
			cout<<"ERROR -podano litere !!!"<<endl;
			cout<<"sprobuj ponownie"<<endl<<endl;
			cin.clear();
	}
}

main(){
	
	while(true){          //zapetlane menu
	
	cout<<"Suma - type +"<<endl;
	cout<<"Roznica - type -"<<endl;
	cout<<"Dzielenie - type /"<<endl;
	cout<<"Mnozenie - type *"<<endl;
	cout<<"Pierwiastek kwadratowy - type $"<<endl;
	cout<<"Potega - type ^"<<endl;
	cout<<"Exit - type @"<<endl;
	cout<<endl;
	cin>>act;

		switch (act){
	
			case '+':{
				zmienne(a,b);
				if(cin.good()){
				sum(a, b);				//case suma
				cout<<endl<<endl;
				break;
				}
			}
			case '-':{
				zmienne(a,b);
				roz(a, b);				//case roznica
				cout<<endl<<endl;
				break;
			}
			case '/':{
				zmienne(a,b);
				dziel(a, b);			//case dzielenie
				cout<<endl<<endl;
				break;
			}
			case '*':{
				zmienne(a,b);
				mnoz(a, b);				//case mnozenie
				cout<<endl<<endl;
				break;
			}
			case '$':{
				var_pierw(a);
				pierw(a);				//case pierwiastek
				cout<<endl<<endl;
				break;
			}
			case '^':{
				zmienne(a,b);
				pot(a,b);				//case potega
				cout<<endl<<endl;
				break;
			}
			case '@':{
				cout<<"Do widzenia!";	//Wyjscie
				return 0;
			}
			/*default:{
				cout<<"Not recognisable button"<<endl;
				break;
			}*/
		}
	}
	cout<<endl;
	return 0;	
}
