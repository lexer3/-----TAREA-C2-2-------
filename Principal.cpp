/////////////////////////////////////////////////////////////////////////////////
//INTEGRANTES//
//LEXER PRECIADO TELLO//
//ALISSON LUCAS ANGULO//
//WENDY ELIZABETH ROBINZON //
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<fstream>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
#include "colaboradores.h"    
int main() 
{
	
	int da,  ma,  aa, an,  mn,  dn, a,m,d;
	float peso,estatura,i;
	Persona motato;
	int op,flag;
	
	
	do{
	system("cls");
	cout<<"\nPROGRAMA DE DATOS PERSONALES"<<endl<<endl;
	cout<<"1.-eliga esta opcion para digitar y mostrar los datos personales \n";
	cout<<"2.-Aqui se muestra la edad de la persona\n";
	cout<<"3.-Aqui se muestra el indice comporal de la persona\n "; 
	cout<<"4.-Guardar documento\n";
	cout<<"5.-Recuperar los datos desde el documento y mostrarlos por pantalla \n";
	
	cout<<"0.-Elija esta opcion para salir \n";
        cout<<" Digite una numero : "; cin>>op;
	switch(op){
		case 1:
			
		motato.ingresar();
		motato.mostrar();
		break;
		cout<<"SU EDAD ES:";
	        case 2:
	        cout<<"-----------------------------------------------------"<<endl;	
	        cout<<"DIGITE LA FECHA ACTUAL (a-m-d): "; 
              cin>>aa>>ma>>da;
	        motato.caledad( aa,ma,da);
	        motato.mostraed();
				
		break;
		case 3:
	
		motato.calimc(i);
		
		break;
		case 4:
		
		motato.guardar();
		break;
		case 5:
	    motato.rym();
		break;
		
		}
		  if(op!=0){
			    cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Programa: "<<endl;

	}
	}while(op!=0);
   system("pause");
	return (0);

}
