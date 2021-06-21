#include<iostream>
using namespace std;
int main()
{
int c=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];

//El primer problema es resulto por Kevin Tapuy Cañola

//suma de matriz echo por tigua vivero y 
   for (c=0; c<10; c++)
    {
    	cout<<"Ingrese una cantida: "<<endl;
    	cin>>matriz1[c];
	}
for (c=0; c<10; c++)
suma[c]= matriz1[c]+ matriz2[c];
cout<<"El resultado de la suma de las matrizes es";
for (c=0; c<10; c++)
cout<<suma[c]<<" ";

return 0;

}

ke212001 
