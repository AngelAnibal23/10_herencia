#include <iostream> 
#include <cmath>
using namespace std; 

class Figura{
	protected: 
		string color; 
	public: 
		Figura(){
			color = ""; 
		} 
		Figura(string a){
			color = a; 
		}
};

class Circulo : public Figura{
	private: 
		float radio; 
	public: 
		Circulo(){
			radio = 0; 
		} 
		Circulo(string a, float radio_) : Figura(a){
			radio = radio_; 
		}
		float calcularArea(){
			return M_PI * radio; 
		} 
		float calcularPerimetro(){
			return M_PI * 2 * radio;  
		}
}; 

class Rectangulo : public Figura{
	private: 
		float base; 
		float altura; 
	public: 
		Rectangulo(){
			base = 0; 
			altura = 0; 
		}
		Rectangulo(string a, float b, float h) : Figura (a){
			base = b; 
			altura = h; 
		}
		float calcularArea(){
			return base * altura; 
		}
};

class Triangulo : public Figura{
	private: 
		float Base; 
		float Altura; 
		string tipo; 
	public: 
		Triangulo(){
			Base = 0; 
			Altura = 0; 
			tipo = ""; 
		}
		Triangulo(string a, float ba, float al, string type) : Figura(a){
			Base = ba; 
			Altura = al; 
			tipo = type; 
		}
		float calcularArea(){
			return (Base * Altura)/2; 
		}
};


int main(){
	string colore; 
	float RADIO; 
	
	cout<<"Digite el color del ciruclo: "; cin>>colore; 
	cout<<"Digite el radio del ciruclo: "; cin>>RADIO; 
	
	Circulo cir(colore, RADIO); 
	
	cout<<endl; 
	cout<<"El area del circulo es: "<<cir.calcularArea()<<endl;
	cout<<"El perimetro del ciruclo es: "<<cir.calcularPerimetro()<<endl; 
	
	float BASE, ALTURA; 
	
	cout<<endl; 
	cout<<"Digite el color del rectangulo: "; cin>>colore; 
	cout<<"Digite la base del rectangulo: "; cin>>BASE; 
	cout<<"Digite el valor de la altura: "; cin>>ALTURA; 
	
	Rectangulo rect(colore, BASE, ALTURA); 
	
	cout<<"El area del rectangulo es: "<<rect.calcularArea()<<endl; 
	
	string Typetri; 
	
	cout<<endl; 
	cout<<"Digite el color del triangulo: "; cin>>colore; 
	cout<<"Digite la base del triangulo: "; cin>>BASE; 
	cout<<"Digite el valor de la altura: "; cin>>ALTURA; 
	cout<<"Digite el tipo de triangulo: "; cin>>Typetri; 
	
	Triangulo tri(colore, BASE, ALTURA, Typetri); 
	
	cout<<endl; 
	cout<<"El area del triangulo es: "<<tri.calcularArea()<<endl;
	cout<<"El tipo de triangulo es: "<<Typetri<<endl; 
	
	
	return 0; 
}