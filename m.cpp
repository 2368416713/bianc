#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
#include"xiaoxie.h"
#include"llj.cpp"
#include"UI.h"
//#include"judge.h"
using namespace std;
int main(){
	char b;
	AcceptUI();
	int flag=1;
	string a,target;
	b=getchar();
	getchar();
	if(b=='!'){
		ExitUI();
		return 0;
	};
	while(1){
	//���� 
	InputUI();
	cin>>a;
	//������
//	flag=judge(a);
//	cout<<flag;
	if(flag==-1){
		//���� 
		ErrorUI();
		b=getchar();
		getchar();
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
		target=check(a);
		
	}
	//cout<<target<<endl;
	//��� 
	OutputUI(target);
	//ѯ���Ƿ��ٴ�ʹ��
	AskUI();
	b=getchar();
	getchar();
	if(b=='!'){
		ExitUI();
		return 0;
	}
	
	}
	
}
