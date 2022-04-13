#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;


int main(){
	int n=0;
	int i,j;
		cout<< "insira o valor de linhas:"<<endl;
		cin>>i;
		cout<< "insira o valor de colunas:"<<endl;
		cin>>j;
		cout<<"\n";
	int linha, coluna;
	
	int matriz[i][j];
	
	srand(time(NULL));
	
	for(linha = 0; linha <i ;linha++){
		
		for( coluna = 0; coluna<j; coluna++){
			matriz[linha][coluna]=n=n+1;
		}
	}
	
	for(linha = 0; linha <i ;linha++){
		cout<<"[";
		for( coluna = 0; coluna<j; coluna++){
			
			
			cout<<matriz[linha][coluna]<<" ";
			                       
		}
		cout<<"]";
	cout<<endl;
		
	}
return 0;
}
