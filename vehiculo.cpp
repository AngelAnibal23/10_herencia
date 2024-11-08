/*
crear la clase padre vehiculo y las clases hijas autromovil y 
camion. Se puiede implementar el diagram de clases con 
los construtores y funciones necesarias para cada clase 
en implementar el diagram en c++
*/

#include <iostream> 
#include <string>

using namespace std; 

class Vehiculo{
	protected: 
	string numeroPlaca; 
	string marca; 
	string color; 
	float velocimetro; 
	public: 
	Vehiculo();
	Vehiculo(string , string, string, float); 
	void mostrarDatos(); 	
};

Vehiculo::Vehiculo(){
	numeroPlaca = ""; 
	marca = ""; 
	color = ""; 
	velocimetro = 0; 
}

Vehiculo::Vehiculo(string placa, string marcaa, string colorr, float velci){
	numeroPlaca = placa; 
	marca = marcaa; 
	color = colorr; 
	velocimetro = velci; 
}

void Vehiculo::mostrarDatos(){
	cout<<endl;
	cout<<numeroPlaca<<endl; 
	cout<<marca<<endl; 
	cout<<color<<endl; 
	cout<<velocimetro<<endl; 
}

class Automovil : public Vehiculo{
	private:
	    int cantidadPuertas; 
	    int cantidadPasajeros; 
	public: 
		Automovil();
		Automovil(string, string, string, float, int,int); 
		void mostrarAutomovil(); 
		void subirPasajeros(int); 
		void bajarPasajeros(int); 
};

Automovil::Automovil(){
	cantidadPuertas = 0; 
	cantidadPasajeros = 0; 
}

Automovil::Automovil(string placa, string marcaa, string colorr, float velci, int cantP, int cantPas) : Vehiculo(placa, marcaa, colorr, velci){
	cantidadPasajeros = cantPas; 
	cantidadPuertas = cantP; 
}

void Automovil::mostrarAutomovil(){
	cout<<endl;
	cout<<numeroPlaca<<endl; 
	cout<<marca<<endl; 
	cout<<color<<endl; 
	cout<<velocimetro<<endl;
	cout<<cantidadPuertas<<endl; 
	cout<<cantidadPasajeros<<endl; 
}

void Automovil::subirPasajeros(int suben){
	cantidadPasajeros+=suben; 
}

void Automovil::bajarPasajeros(int bajan){
	cantidadPasajeros-=bajan; 
}

class Camion : public Vehiculo{
	private:
		string carga; 
	public: 
		Camion(); 
		Camion(string, string , string, float, string); 
		void mostrarCamion(); 
		void cambiarCarga(string); 
};

Camion::Camion(){
	carga = ""; 	 
}

Camion::Camion(string placa, string marcaa, string colorr, float velci, string carga_) : Vehiculo(placa, marcaa, colorr, velci){
	carga = carga_; 
}

void Camion::mostrarCamion(){
	cout<<endl;
	cout<<numeroPlaca<<endl; 
	cout<<marca<<endl; 
	cout<<color<<endl; 
	cout<<velocimetro<<endl;
	cout<<carga<<endl; 
}

void Camion::cambiarCarga(string carg){
	carga = carg; 
}

int main(){ 
	Automovil Au("A1B-234","Chevrolet","azul", 180.0, 4, 3); 
	Camion cam("A1B-234","ZUZUKI","blanco-verde", 180.0 , "Platano");  
	
	Au.mostrarDatos();
	cam.mostrarCamion();
	
	
	
	return 0; 
}