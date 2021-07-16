//////////////////////////////////////////////////////
//PARTICIPANTE1- AQUI SE INGRESA Y SE MUESTRAN LOS DATOS//
//LEXER PRECIADO TELLO//

class Persona{
	
	private:
		
		string nombres, apellidos,cedula;
		int aa,ma,da,an,mn,dn,a,m,d;
		float peso, estatura,imc;
		
		
	public:
  Persona(){
		}
  void ingresar()
		{
			
			cout<<"Digite los datos"<<endl;
			
			cout<<"Ingresar su numero de cedula: \n";getline(cin,cedula); 
			
			cout<<"Ingresar sus nombres:  ";getline(cin,nombres);//
			cout<<"Ingresar sus apellidos:  ";getline(cin,apellidos);
			cout<<"Ingresar su peso: ";cin>>peso;
			cout<<"Ingresar su estatura: ";cin>>estatura;
			cout<<"Ingresar su fecha de nacimiento (a-m-d): "; 
               cin>>an>>mn>>dn;
            
		}

	void mostrar()
		{
	    cout<<"-----------------------------------------------------"<<endl;	
		cout<<"|CEDULA"<<"\t";
		cout<<"  |NOMBRES"<<"\t"; 
		cout<<"  |APELLIDOS"<<"\t";
		cout<<"  |PESO"<<"\t";
		cout<<"  |ESTATURA"<<"\t";
		cout<<"  |AA:"<<"\t";
		cout<<"  |MM:"<<"\t";
		cout<<"  |DD:"<<endl;
cout<<"|"<<cedula<<"\t";
		cout<<"  |"<<nombres<<"\t";
		cout<<"  |"<<apellidos<<"\t";
		cout<<"|"<<peso<<"\t";
		cout<<"|"<<estatura<<"\t";
		cout<<"  |"<<an<<"\t";
		cout<<"  |"<<mn<<"\t";
		cout<<"  |"<<dn<<endl;
		
		}
		
//////////////////////////////////////////////////////////
//PARTICIPANTE2 - AQUI SE CALCULA LA EDAD//
//LEXER PRECIADO//
 
	void caledad(int aa,int ma,int da) 
  
  {
  	if(da>dn)
{
	d=da-dn;
}else{
	da=da+30;
	ma=ma-1;
	d=da-dn;
}
if(ma>mn)
{
	m=ma-mn;
}else{
	ma=ma+12;
	aa=aa-1;
	m=ma-mn;
}

a=aa-an;
   } 
	 void mostraed()
   {
   	cout<<"Su edad es : "<<a<<" Años "<<m<<" MESES "<<d<<" DIAS "<<endl;
   	
   }
  
	
////////////////////////////////////////////////////////
//PARTICIPANTE3- CALCULAR EL INDICE DE MASA CORPORAL// 
//ALISSON LUCAS//

 void calimc(float i)
 {
   i=peso/(estatura*estatura);
 	cout<<"Su IMC es:"<<i<<endl;
	 
   if (imc<24){
 	cout<<"SU INDICE CORPORAL ES NORMAL"<<endl;
 		
	 
   }else{
	cout<<"PELIGRO ESTA GORDO"<<endl;
	}
	 
 }
	
////////////////////////////////////////////////
 //PARTICIPANTE4-GUARDAR DOCUMENTO TXT//
 //WENDY ROBINZON//

   void guardar(){
   ofstream ar;
   ar.open("registro.txt",ios::out);
   if (ar.fail()){
           cout<<"FAIL";
           exit(1);
    }
          ar<<"CEDULA: "<<cedula<<endl;
          ar<<"NOMBRES: "<<nombres<<endl;
          ar<<"APELLIDOS: "<<apellidos<<endl;
          ar<<"PESO: "<<peso<<endl;
          ar<<"ESTATURA: "<<estatura<<endl;
          ar<<"AA: "<<an<<endl;
          ar<<"MM: "<<mn<<endl;
          ar<<"DD: "<<dn<<endl;
          Cout<<"EL DOCUMENTO SE HA GUARDADO";
          ar.close();
}
	
//////////////////////////////////////////////////
 //WENDY ROBINZON- AQUI SE RECUPERA LOS DATOS DESDE EL DOCUMENTO TXT Y SE LOS MUESTRA//
/////////////////////////////////////////////////

    void rym()
{
    ifstream ar;
    string texto;
    ar.open("registro.txt",ios::in);
    if(ar.fail()){
            cout<<"NO ABRE";
            exit(1);
     }
     while(!ar.eof()){
            getline(ar,texto);
            cout<<texto<<endl;
     }
     ar.close();
 }
};	
	
	
