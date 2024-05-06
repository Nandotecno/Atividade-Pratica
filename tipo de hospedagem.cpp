#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
main(){
	char nomeasb[30];
	int diariasasb;
	int mesasb;
	float valordasb;
	float valortotalasb;
	string respasb;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		cout<<"\n-------------------------------------------------------";
		cout<<"\n                      HOTEL LITORAL                    ";
		cout<<"\n-------------------------------------------------------";
		cout<<"\n\n Digite o nome do hóspede: ";
		cin>>nomeasb;
		cout<<"\n\n Digite o número de diárias: ";
		cin>>diariasasb;
		cout<<"\n\n Digite o tipo de hospedagem: ";
		cin>>mesasb;
		cout<<"\n-------------------------------------------------------";
		
		switch (mesasb){
			case 1 : valordasb=250;
						break;
						
			case 2 : valordasb=290;
						break;
						
			case 3 : valordasb=310;
						break;
										
			default : cout<<"\n Tipo de Hospedagem não existente";
						valordasb=0;
							break;
					 			
		};
		
		valortotalasb = diariasasb * valordasb;
		
		cout<<"\n\n Valor da diária...........: R$ "<<valordasb;
		cout<<"\n\n Valor Total da Hospedagem.: R$ "<<valortotalasb;
		cout<<"\n-------------------------------------------------------";
		cout<<"\n Digite S para novo cliente : ";
		cin>>respasb;		
	}
	while (respasb == "S");
	cout<<"\n\n FIM DO PROGRAMA !!!";
	return 0;
}



