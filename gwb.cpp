#include<stdio.h>
#include<string.h>
#include<iostream>
#include"xiaoxie.h"

using namespace std;
int main(){
	char b;
	AcceptUI();
	int flag=0;
	string a,target;
	b=getchar();
	if(b=='!'){
		ExitUI();
		return 0;
	};
	while(1){
	//���� 
	InputUI();
	cin>>a;
	//������
	//flag=test(a);
	if(flag==-1){
		//���� 
		ErrorUI();
		b=getchar();
		//�������� 
		if(b=='n'){
			continue;
		}
		//�˳����� 
		else{
			ExitUI();
			return 0;
		}
		
	}
	else if(flag==0){
		//��д 
		//target=toSmall(a);
		
	}
	else{
		//Сд 
		//target=toBig(a);
		
	}
	//cout<<target<<endl;
	//��� 
	OutputUI(target);
	//ѯ���Ƿ��ٴ�ʹ��
	AskUI();
	b=getchar(); 
	if(b==!){
		ExitUI();
			return 0;
	}
	
	}
	
}
