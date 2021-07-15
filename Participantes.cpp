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
  
