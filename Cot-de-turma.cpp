//Desenvolendo um app para controle de turmas - (Lucca Radaeli Baptista)

#include<iostream>
#include<windows.h>
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iomanip>
#include <fstream>

using namespace std;

//------------ VARI�VEIS
bool sair;
int escmenu, userQ1;
//main

int main (){
	sair=false;
	setlocale(LC_ALL, "Portuguese");
		cout<<setw(50)<<"Bem Vindo ao Controle de Turma!"<<setw(60)<<endl<<endl;
		cout<<setw(60)<<"A finalidade deste aplicativo � auxiliar no controle de alunos de uma turma."<<endl<<endl;	
		cout<<setw(60)<<"Desenvolvido por: Lucca Radaeli - An�lise e Dev de Sistemas - Est�cio"<<endl<<endl;
			system("pause");
			system("cls");
	
//menu principal

while(sair!=1){
	
	
	cout<<"--------- MENU PRINCIPAL ---------\n\n";

	cout<<"[1] -- Cadastrar novos alunos\n\n";
	cout<<"[2] -- Vis�o Geral da Turma (resumo)\n\n";
	cout<<"[3] -- Vis�o detalhada da turma\n\n";
	cout<<"[4] -- Encerrar o programa\n\n";
	cout<<" Digite o n�mero da op��o desejada: ";
	
		cin>>escmenu;
	//swcase para controle de op��es do menu
	switch (escmenu){
		
		case 1: 
			system("cls");
				cout<<"CADASTRO DE NOVOS ALUNOS";
				cout<<"Quantos alunos deseja cadastrar? "<<endl;
				cin>>userQ1;
					system("pause");
								system("cls");

						
						break;
		case 2:
			system("cls");
				cout<<"VIS�O GERAL DA TURMA";
					system("pause");
								system("cls");

		 
						break;
		
		case 3:
			system("cls");
				cout<<"VIS�O DETALHADA DA TURMA";			
					system("pause");
								system("cls");
		
						
						break;
		case 4:
			system("cls");
				cout<<"ENCERRANDO";
				Sleep(1000);
				
				sair = true;
					system("pause");
								system("cls");

						
						break;
			
}
	
	
	
	
	
	
	
	
}	
	
	
	
	
}



//fun��es






