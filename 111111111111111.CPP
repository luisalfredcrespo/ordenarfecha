#include <iostream.h>
#include <conio.h>

class Fecha{
	private:
   	int dia,mes,anio;
   public:               //Agregar Fecha (long f) un argumento y tiene que tener dd,mm,aaaa      no char, no arreglos
      Fecha (){}
      Fecha (int d, int m, int a);
       Fecha (long d, long m, long a);
      ~Fecha(){           //Java no tiene destructor
      	cout<<"Invocando al destructor"<<endl;
         }
   	      void set_Fecha(int d, int m, int a);
      //seccion de implementacion inline
            void mostrar (){
           cout<<"La fecha es "<<dia<<"/"<<mes<<"/"<<anio<<endl;
      }
};

//seccion de implementacion fuera de linea
void Fecha::set_Fecha(int d, int m, int a){
 	dia=d;
   mes=m;
   anio=a;
}

Fecha::Fecha (int d, int m, int a){
	dia=d;
   mes=m;
   anio=a;
}

   int main (){
	//declaracion de objetos
   int dd,mm,aa;

   Fecha f1,f2,f3,f4(10,9,2015);
   f1.set_Fecha(4,2,2000);
   f1.mostrar();
   //almacena datos a traves de variables
   cout<<"ingresa dia ";
   cin>>dd;
   cout<<"\ningresa el mes ";
   cin>>mm;
   cout<<"\ningresa el anio ";
   cin>>aa;

   //trasladar los valores de las variables al objeto a partir del metodo mutador
   f2.set_Fecha(dd,mm,aa);
   f2.mostrar();

   f3.mostrar();
   cout<<"\n�que datos deseas conocer?";
   cin>>dd,mm,aa;

   f4.set_Fecha(dd,mm,aa);
   f4.mostrar();


   getch();
   return 0;
}

