#include <iostream> 
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
}; 

int main(){
	
	
	return 0; 
}