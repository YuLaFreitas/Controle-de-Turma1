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

//------------ VARIÁVEIS
bool sair;
int escmenu, userQ1;
//main

int main (){
	sair=false;
	setlocale(LC_ALL, "Portuguese");
		cout<<setw(50)<<"Bem Vindo ao Controle de Turma!"<<setw(60)<<endl<<endl;
		cout<<setw(60)<<"A finalidade deste aplicativo é auxiliar no controle de alunos de uma turma."<<endl<<endl;	
		cout<<setw(60)<<"Desenvolvido por: Lucca Radaeli - Análise e Dev de Sistemas - Estácio"<<endl<<endl;
			system("pause");
			system("cls");
	
//menu principal

while(sair!=1){
	
	
	cout<<"--------- MENU PRINCIPAL ---------\n\n";

	cout<<"[1] -- Cadastrar novos alunos\n\n";
	cout<<"[2] -- Visão Geral da Turma (resumo)\n\n";
	cout<<"[3] -- Visão detalhada da turma\n\n";
	cout<<"[4] -- Encerrar o programa\n\n";
	cout<<" Digite o número da opção desejada: ";
	
		cin>>escmenu;
	//swcase para controle de opções do menu
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
				cout<<"VISÂO GERAL DA TURMA";
					system("pause");
								system("cls");

		 
						break;
		
		case 3:
			system("cls");
				cout<<"VISÃO DETALHADA DA TURMA";			
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



//funções






