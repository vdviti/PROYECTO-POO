#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//defino la clase
class alumnos {     
  public: 
          
    int num; 
    string cadena;            
           
   
};

int main(){
    
    alumnos objeto; 
          
            objeto.cadena = "Alumnos de clase"; 
            objeto.num = 8;


  cout << objeto.cadena<<endl;
  cout << objeto.num << "\n"; 
   
  

// se crea el menu con opciones
  int opcion;
  string alumnos[8];
                

    
  do{
		cout<<"1.- Introducir nombres"<<endl;
		cout<<"2.- Imprimir nombres"<<endl;
		cout<<"3.- Salir"<<endl;
		
		cout<<"opcion 1,2 o 3: ";
		cin>>opcion;
		
		
		// al introducir el 1 realiza esta funcion
		if(opcion==1){
			for(int i=0; i<8;i++){
				cout<<"Introduce nombre"<<i+1<<": ";
				cin>>alumnos[i];
			}	
		}
		
		
		// al introducir el 2 realiza esta funcion
		if(opcion==2){
			for(int i=0; i<8;i++){
				cout<<"nombre"<<i+1<<" es "<<alumnos[i]<<endl;
			}
			
		}
		
	}while(opcion!=3);

	
	// creo el fichero
	ofstream fichero("lectura");
	fichero << "Leyendo opciones" << endl;
	fichero << "Leyendo nombres" << endl;
	fichero.close();
	cout << "Lectura de fichero completada" << endl;
	
    system("pause");
	
	
	
  return 0;
}
