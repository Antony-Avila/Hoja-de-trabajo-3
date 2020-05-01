/*Ejercicio # 1:
El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador. nombre, edad, nacionalidad,edad, mayor sueldo(nombre)

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.
*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
struct planilla{
	string nombre;
	int edad;
};
void mp(); //definicion de la funcion 
void planilla_general();
void leer_archivo();
int main(){	
	mp();	
}
void mp(){ // menu principal
	
	int resp;
	
	do{
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" "<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - ingresar jugador a planilla "<<"\n";
		cout<<" 2 - mostrar jugadores en planilla "<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opción: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			planilla();			
		}
		else if (resp==2){		
			system("CLS");
			leer_archivo();
		}			
		else if (resp==3)
			break;
		else 
			break;
		
	} while(resp!=3);	
}
void planilla_general(){
	string nombre_n;
	string naci;
	int edad_n;
	float sueldo =2500.00;
	float sueldo_n;
	float sueldo_total = 0;
	float sueldo_may=0;
	
	ofstream archivo; //grabar archivo
	fflush(stdin);
	cout<<"Ingrese Nombre: "<<endl;
	getline(cin,nombre_n);
	fflush(stdin);	
	cout<<"Ingrese edad: "<<endl;
	cin>>edad_n;
	fflush(stdin);
		cout<<"Ingrese si es extranjero 's -n': "<<endl;
	cin>>naci;
	fflush(stdin);
	
	
	for (int i=1; edad_n<=20; i++)
		cout<< "ingrese edad"<<endl;
		sueldo= sueldo + 1400;
		cin>> edad_n;
		for(int i=1; naci=="s"; i++)
			cout<< "ingrese si es extrangero o no : "s - n""<<endl;
			sueldo= sueldo + 500;
		
	if(i=1; edad>20 && edad<=25;i++);
		cout<< "ingrese edad"<<endl;
		cin>> edad;
		sueldo= sueldo + 1500;
		
		for(int i=1; naci=="s"; i++)
			sueldo= sueldo + 500;
		if 
			sueldo= sueldo;
					
	elif(int i=1; edad>25 && edad<=30;i++);
		cout<< "ingrese edad"<<endl;
		cin>> edad;
		sueldo= sueldo + 1200;
		for(int i=1; naci=="s"; i++)
			sueldo= sueldo + 500;
		if 
			sueldo= sueldo;
		
	else(i=1; edad>30;i++);
		cout<< "ingrese edad"<<endl;
		cin>> edad;
		sueldo= sueldo + 800;
		for(int i=1; naci=="s"; i++)
			sueldo= sueldo + 500;
		if 
			sueldo= sueldo;
			
	sueldo_may >[i]sueldo;
	sueldo_may= [i]sueldo;
	
	sueldo_total+= sueldo;		
	
	archivo.open("planilla.txt",ios::app); //abrir archivo append
	archivo<<nombre_n<<"\t"<<edad_n<<"\t"<<anho_v<<"\t"<<sueldo_n<<endl;
	archivo.close();	
}
void leer_archivo(){
	ifstream archivo; //leer archivo 
	archivo.open("planilla.txt",ios::in); // leer archivo
	int lineas,i=0;
	string s,linea;	
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
	planilla recordset[lineas];
	
	archivo.open("planilla.txt",ios::in);//leer archivo
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}	
	/*Leer datos del archivo*/
	for (int i = 0; i < lineas; i++)
    {
        if (!archivo)
        {                                               
            cerr << "No se puede abrir el archivo " << endl;
            system("PAUSE");
        }
        archivo>>recordset[i].nombre>>recordset[i].edad>>recordset[i].sueldo<<endl;
    }
    archivo.close(); 
    for(int i = 0; i <lineas; i++){
    	cout<<recordset[i].nombre<<" "<<recordset[i].edad<<" "<<recordset[i].sueldo<<endl;
    sumtot+=recordset[i].sueldo_total;
	}
	system("Pause");
	

}
