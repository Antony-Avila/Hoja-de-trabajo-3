/*Ejercicio # 2:
En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del dia y
determinar el total de lo vendido por producto, mostrando tambien el porcentaje
con relacion al total.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
struct pizzeria{
	int grande;
	int familiar;
	int fiesta;
	int opcion;
	
};
void mp(); //definicion de la funcion 
void pizzeria();
void leer_archivo();
int main(){	
	mp();	
}
void mp(){ // menu principal
	
	int resp;
	
	do{
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - comprar pizza "<<"\n";
		cout<<" 2 - mostrar ventas del día "<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opción: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			pizzeria();			
	
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
void inventario(){
	int grande_p =80;
	int familiar_p=115;
	int fiesta_p=100;
	int opcion_n = 0;
	cout<< "seleccionar tipo de pizza: \n 1. grande \n 2. familiar \n 3. fiesta" <<endl;
	ofstream archivo; //grabar archivo
	fflush(stdin);
	cout<<"Ingrese opcion: 1,2,3: "<<endl;
	getline(cin,opcion);
	fflush(stdin);
	
	for (int i=1; opcion_n==1;i++);
		grande_p = grande_p * 0.90;
	 	cout<< "total a pagar es:"<<grande_p;
		if(opcion_n==2);
			familiar_p = famliar_p * 0.85;
			cout<< "total a pagar es:"<<famliar_p	;
		else;
			fiesta_p= fiesta_p * 0.80;
			cout<< "total a pagar es:"<<fiesta_p;
	
	archivo.open("pizzeria.txt",ios::app); //abrir archivo append
	archivo<<grande_p<<"\t"<<familiar_p<<"\t"<<fiesta_p<<precio_v<<endl;
	archivo.close();	
}
void leer_archivo(){
	ifstream archivo; //leer archivo 
	archivo.open("pizzeria.txt",ios::in); // leer archivo
	int lineas,i=0;
	string s,linea;	
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
	pizzeria recordset[lineas];
	
	archivo.open("pizzeria.txt",ios::in);
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
        archivo>>recordset[i].grande>>recordset[i].familiar>>recordset[i].fiesta;
    }
    archivo.close(); 
    for(int i = 0; i <lineas; i++){
    	cout<<recordset[i].grande<<" "<<recordset[i].familiar<<" "<<recordset[i].fiesta<<endl;
    	totgrande+=recordset[i].grande;
    	cout<< "el total de ventas de pizza grande es:" <<totgrande;
    	totfamiliar+=recordset[i].familiar;
    	cout<< "el total de ventas de pizza familiar es :" << totfamiliar;
    	totfiesta+=recordset[i].fiesta;
    	cout<< "el total de ventas de pizza familiar es:"<<totfiesta
	}
	system("Pause");
}

