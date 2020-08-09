//el usuario ingresara los datos 
//escogera las veces que desea almacenar los datos y volverlos a ver 

#include <iostream>

#include <fstream>

void arch_prueba ();
void arch_lectura ();
using namespace std;


int main()
{
  int opcion ;
cout<<"\n---------------------------------------------\n";
 cout<<"\nBienvenido al programa Noga\n";
 cout<<"1.-Llenar el formulario \n";
 cout<<"2.-Ver el formulario llenado \n"; 
 cout<<"ingrese la opcion deseada" ;
 cin>>opcion;
 cout<<"\n---------------------------------------------\n";
 while (opcion!=0){

 
 switch (opcion ){

   case 1 :
   {
     arch_prueba ();
     break;
   }case 2 :
   {
   
    arch_lectura ();  
    break ; 
   }
   default:{
        cout<<"ingrese una opcion que se muestre en pantalla "<<endl;
      }
 }
 cout<<"\n---------------------------------------------\n";
 cout<<"\nBienvenido al programa Noga\n";
 cout<<"1.-Llenar el formulario \n";
 cout<<"2.-Ver el formulario llenado \n"; 
 cout<<"ingrese la opcion deseada" ;
 cin>>opcion;
 cout<<"Escriba oki si va a llenar el formulario\n";
 cout<<"\n---------------------------------------------\n";
 } 
 cout<<"Salio del programa \n";
 //para la segunda vez que desea ingresar el nombre debe poner "oki" , la primera vez no es necesario
 


 return 0;
   
}
void arch_prueba(){

  string nombre;
   string apellido;
   string oki;
   int edad;
   char d;
   ofstream archivoprueba;
   string nombrearchivo;
   archivoprueba.open("Datos.Txt",ios::app);
   do
    {
    
    cout<<"\tIngrese el nombre:";
    cin>>nombre;
    cin.ignore(' ', '\n');

    cout<<"\tIngrese el apellido:";
    cin>>apellido;
    cin.ignore(' ', '\n');


    cout<<"\tIngrese la edad:";
    cin>>edad;
    cin.ignore(' ', '\n');

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<"\n";

    cout<<"Desea ingresar mas datos s/n";
    cin>>d;

    cin.ignore();
    }
   while(d=='s');

   
   
   archivoprueba.close();

  

       }


   void arch_lectura (){
   string nombre;
   string apellido;
   int edad;
   char r;
      
   ifstream archivolectura("Datos.Txt");
   string texto;
  while(!archivolectura.fail())
    {
      
        archivolectura>>nombre>>apellido>>edad;

        if(!archivolectura.eof())
            {
        getline(archivolectura,texto);
        cout<<"Nombre : "<<nombre<<"\n";
        cout<<"Apellido : "<<apellido<<"\n";
        cout<<"Edad : "<<edad<<"\n";

            }

    }
   archivolectura.close(); 
}