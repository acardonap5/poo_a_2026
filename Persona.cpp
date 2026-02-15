#include <iostream>
using namespace std;
// nombre de la clase
class Persona{
//Atributos
protected : 
	string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
//Constructores
 	Persona(){
	 }
	Persona(string nom,string ape,string dir,int tel,string fn){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}
	
//Metodos (CRUD)
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
