/*Ejercicio # 3:
Un empresa que se dedica a la venta de seguros de vehiculos, calcula el importe
según el modelo y color del automovil, asi como la edad del conductor.

Modelo       Color             Precio
A              Blanco           240.50
                  Metalizado    330.00
                Otros             270.50
B               Blanco          300.00
                 Metalizado     360.50
                 Otros             330.00
           
Incremento de precio
Edad            % Incremento
<31                    25%
Entre 31 y 65    0%
>65                   30%

Determine el importe a pagar mostrandolo en pantalla según los datos del vehículo (modelo y color)
y la edad del conductor.

Grabe los datos a un archivo. */
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
struct seguros{
	string modelo;
	string color;
	int edad;

};
void mp(); //definicion de la funcion 
void mp2()
void segurosA();
void segurosB();
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
		cout<<" 1 - comprar seguro tipo A "<<"\n";
		cout<<" 2 - comprar seguro tipo B "<<"\n";
		cout<<" 3 - mostrar informacion de seguro"<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opción: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			segurosA();			
		}
		
		else if (resp==2){		
			system("CLS");
			segurosB();
		}
		
		else if (resp==3){		
			system("CLS");
			leer_archivo();
		}			
		else if (resp==4)
			break;
		else 
			break;
		
	} while(resp!=4);	
}
void segurosA(){
	float blanco=240.5;
	float metalizado=330.00;
	int otros=270.50;
	int color;
	int edad_n;
	
	ofstream archivo; //grabar archivo
	fflush(stdin);
	cout<<"Ingrese color:" \n "blanco= 1"\n<<"metalizado=2"<<\n"otros=3" <<endl;
	getline(cin,color);
	fflush(stdin);
	cout<<"Ingrese su edad: "<<endl;
	getline(cin,edad_n);
	
	for(int i=1; color==1; i++);
		 totalseg= blanco;
		 	for(int i=1; edad<=30; i++);
			 	totalseg= totalseg *0.75;
			 
				if (edad>30);
				totalseg= totalseg* 0.70;
		
		if (color==2);
			totalseg= metalizado;
				for(int i=1; edad<=30; i++);
			 	totalseg= totalseg *0.75;
			 
				if (edad>30);
				totalseg= totalseg* 0.70;
				
		else;
			totalseg= otros;
				for(int i=1; edad<=30; i++);
			 	totalseg= totalseg *0.75;
			 
				if (edad>30);
				totalseg= totalseg* 0.70		
				
				
	archivo.open("vehiculos.txt",ios::app); //abrir archivo append
	archivo<<placa_v<<"\t"<<marca_v<<"\t"<<anho_v<<"\t"<<precio_v<<endl;
	archivo.close();	
}
void leer_archivo(){
	ifstream archivo; //leer archivo 
	archivo.open("seguros.txt",ios::in); // leer archivo
	int lineas,i=0;
	string s,linea;	
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
	vehiculos recordset[lineas];
	
	archivo.open("seguros.txt",ios::in);
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
        archivo>>recordset[i].edad>>recordset[i].color>>recordset[i].totalseg;
    }
    archivo.close(); 
   
	system("Pause");
}

