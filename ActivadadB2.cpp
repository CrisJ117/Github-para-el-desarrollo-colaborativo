#include<iostream>
using namespace std;
int main()
{
int opcion;
int c=0;
bool repetir = true;	
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];

//Mostrar por pantalla los elementos de la matriz.Genesi Simisterra
 do {
        system("cls");
 
           cout<<"       "<<endl;
     cout<<"         ====================== MENU ===================="<<endl;
     cout<<"         <<            1. VISUALIZACION DE MATRIZ      >>"<<endl;
     cout<<"         <<            2. SUMA DE MATRIZ               >>"<<endl;
     cout<<"         >>            3. RESTA DE MATRIZ              <<"<<endl;
     cout<<"         <<            4. PRODUCTO DE MATRIZ           >>"<<endl;
     cout<<"         >>            5. DIVISION DE MATRIZ           <<"<<endl;
     cout<<"         >>            6. SALIR                        <<"<<endl;
     cout<<"         ================================================"<<endl;
        cout << "\nIngrese una opcion del menu: "<<endl;
        cin >> opcion;
        
        switch (opcion) {
            case 1:
               cout<<"========================="<<endl;              
               cout << "<<LA PRIMERA MATRIZ1 ES>>"<< "\n";
               cout<<"========================="<<endl;  
	do {	  
		 cout<<matriz1[c]<<endl;
		  c++;
	}
	
	while (c < 10);	
	
	c = 0;
	
	       cout<<"========================="<<endl;              
               cout  <<  "<< LA SEGUNDA MATRIZ2 ES >>" <<  "\ n" ;
               cout << "=========================" <<endl;  
	do {	  
		  cout<<matriz2[c]<<endl;
		  c++;
	}
	
	while (c < 10);	
	
	c = 0;
                system("pause>nul");
                break;	
	
	
	
//Llenar la matriz suma con la suma de cana uno de los elementos de la matriz1 y la matriz2. Tigua Vivero
 case 2:
            cout<<"========================================="<<endl; 
			cout << "<<LA SUMA ENTRE LA MATRIZ1 Y MATRIZ2 ES>>"<< "\n";
            cout<<"========================================="<<endl; 
	do {
		suma[c] = matriz1[c]+matriz2[c];
		cout<<suma[c]<<endl;
		c++;
	}
	while (c < 10);	
	
	c = 0;
                system("pause>nul"); 
                break;
//Llenar la matriz resta con la resta de la matriz1 y la matriz2. Clarisa Stefania Ortiz
case 3:
            cout<<"=========================================="<<endl; 
			cout << "<<LA RESTA ENTRE LA MATRIZ1 Y MATRIZ2 ES>>"<< "\n";
            cout<<"=========================================="<<endl; 

	do {
		resta[c] = matriz1[c]-matriz2[c];
		cout<<resta[c]<<endl;
		c++;
	}
	while (c < 10);	
	
	c = 0;              
                
                system("pause>nul");            
                break;

	
	
	
// Llenar la matriz producto con la multiplicacion de la matriz1 y la matriz2. Clarisa Stefania Ortiz
case 4:
            cout<<"============================================="<<endl; 
			cout << "<<EL PRODUCTO ENTRE LA MATRIZ1 Y MATRIZ2 ES>>"<< "\n";
            cout<<"============================================="<<endl; 


	do {
		producto[c] = matriz1[c]*matriz2[c];
		cout<<producto[c]<<endl;
		c++;
	}
	while (c < 10);	
	
	c = 0;              
                
                system("pause>nul");              
                break;
// Llenar la matriz división con la división de cada elemento de la matriz1  con la matriz2. Kevin Antonio Tapuy
case 5:	
	     cout<<"============================================="<<endl; 
			cout << "<<LA DIVISION ENTRE LA MATRIZ1 Y MATRIZ2 ES>>"<< "\n";
             cout<<"============================================="<<endl; 

	do {
		division[c] = matriz1[c]/matriz2[c];
		cout<<division[c]<<endl;
		c++;
	}
	while (c < 10);	
                system("pause>nul");              
                break;
	case 6:
            	  cout<<endl<<endl<<endl<<endl<<endl;
   cout<<" ================================================"<<endl;
   cout<<" >>                                            <<"<<endl;
   cout<<" <<    TRABAJO REALIZADO POR:                  >>"<<endl;
   cout<<" >>                                            <<"<<endl;
   cout<<" <<                     * Genesi Simisterra    >>"<<endl;
   cout<<" <<                     * Tigua Vivero         >>"<<endl;
   cout<<" <<                     * Clarisa Stefania     >>"<<endl;
   cout<<" <<                     * Kevin Antonio        >>"<<endl;
   cout<<" >>                                            <<"<<endl;
   cout<<" <<    Programa finalizado...                  >>"<<endl;
   cout<<" ================================================"<<endl;

            	repetir = false;
            	break;
        }        
    } while (repetir);
return 0;

}

