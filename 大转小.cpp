#include<iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int isNum(string cc){
	if (cc == "Ҽ"){
		return 1 ;
	} 
	if (cc == "��"){
		return 1; 
	} 
	if (cc == "��"){
		return 1; 
	} 
	if (cc == "��"){
		return 1; 
	} 
	if (cc == "��"){
		return 1; 
	} 
	if (cc == "½"){
		return 1; 
	} 
	if (cc == "��"){
		return 1; 
	} 
	if (cc == "��"){
		return 1; 
	} 
	if (cc == "��"){
		return 1; 
	} 
	return 0;
}


string solve(string money, string str,int yi, string wei){
	int tag = 0;
		for ( int i = 0; i <= yi; i+= 2 ){
			//��Ǫ
//			cout << wei << wei << endl;
			if (money.substr(i,2) == "Ǫ"){    
//			cout << wei << wei << "!!!" << endl; 
//				char c = money[i-1];
//				str.append(c);
//				printf("�ҵ���ǧ��������\n");
				tag = 1;
//				cout << money.substr(i-2,2) << endl;
				str += money.substr(i-2,2);
				break;
			} 
		}
		if (tag == 0 ){
//				str.append('0');
				str += "��";
				
		}
//		cout << wei << wei<< "bai" << endl;
//		cout << "money"<< money  << endl;
		tag = 0;
		for ( int i = 0; i <= yi; i+= 2 ){
			// �Ұ� 
//			cout << i << endl;
			if (money.substr(i,2) == "��"){
				printf("�ҵ���bai��������\n");
//				char c = str[i-1];
//				str.append(c);
				tag = 1;
				str += money.substr(i-2,2);
				break;
			} 
			
		}
		
		if (tag == 0){
//				str.append('0');
				str += "��";
			
			}
			
//			cout << wei << wei << endl;
			
		tag = 0	;
//		cout << "str:" << str << wei <<endl;
		for ( int i = 0; i <= yi; i+= 2 ){
			
			// ��ʲ
			if (money.substr(i,2) == "ʰ"){
//				cout << wei << wei << " !!!!!!!!!!!!!!!!"<< endl;
//				char c = str[i-1];
//				str.append(c); 
//				str += money[i-1];
				tag = 1;
				str += money.substr(i-2,2);
				break;
			} 
		}
		if (tag == 0){
//				str.append('0');
//				str += '0';
				str += "��";
			
		}
		
		tag = 0;	
		for ( int i = 0; i <= yi; i+= 2 ){
			// �Ҹ�λ
			if (money.substr(i,2) == wei) {
				if ( isNum(money.substr(i-2,2))==1 ){
//					char c = str[i-1];
//				 	str.append(c); 
//					str += money[i-1];
					tag = 1;
					str += money.substr(i-2,2);
//					printf("!!!!!!!!!!!!!") ;
					break;
				} 
			}
		}
		if (tag==0) {
//					str.append('0');
//					str += '0';
					str += "��";
					
				}
	return str;
} 

string ToSamll(string money){
	cout << money << endl;
	
	string str = "";
	int len = money.length();
	printf("���ȣ�%d\n",len);
	
	// ���ڷָ� 
	int yi = -1;
	for(int i = 0; i < len; i+=2) {
		if (money.substr(i,2) == "��") {
			yi = i;	
			break;
		}
	}
	printf("�ڵ��±�%d\n",yi);
		
	// ����ָ�
	int wan = -1;
	for(int i = 0; i < len; i+=2) {
		if (money.substr(i,2) == "��") {
			wan = i;	
			break;
		}
	}
	
	// ��Ԫ�ָ� 
	int  yuan = -1;
	for(int i = 0; i < len; i+=2) {
		if (money.substr(i,2) == "Ԫ") {
			yuan = i;	
			break;
		}
	}
		
	printf("�ָ����ˣ�����������"); 
		
	if (yi != -1) {   //�ҵ����� 
//		cout << money.substr(0,yi+2) << endl;
		str = solve(money.substr(0,yi+2), str, yi,"��");	
	}
	
		
	if (wan != -1) {   //�ҵ����� 
		if (yi!=-1){  //���ҵ����� 
//			cout << money.substr(yi+2,wan-yi) << endl;
//			cout << str << endl;
			
			str = solve(money.substr(yi+2,wan-yi), str, wan-yi-2,"��");
			
		}
		else { //ǰ��û���� 
			str += solve(money.substr(0,wan+2), str, wan,"��");	
		}	
	} else {
		str += "��������" ;
	}
	
	// Ԫ
	if ( isNum(money.substr(yuan-2,2) )  ){   //��ʮ��ǧ �� 
		if ( wan != -1){ //���� 
			str = solve(money.substr(wan+2,yuan-wan), str, yuan-wan-2,"Ԫ");
		}
		if(wan == -1 ){ //û���� 
			if ( yi == -1 ){  // meiyouyi
				str = solve(money.substr(0,yuan+2), str, yuan,"Ԫ");
			}
			if ( yi != -1){  // you yi
				
				str = solve(money.substr(yi+2,yuan-yi),str,yuan-yi-2,"Ԫ");
			}
		} 
	} else {
			str += "��������" ;
	}	
		
	
	 
	cout << "!!!" <<endl;
	// ��û�� 
//	if ( yi==-1 && wan == -1 ){
//		
//	}
	
	
	printf("03d\n");
//	printf("%s",str);
//	cout << str << endl;
	return str;
}	

string ToNum(string str ){
//	cout << str << "!!!";
	string num;
	int len = str.length();
	for ( int i = 0; i < len; i+= 2){
		if (str.substr(i,2) == "Ҽ"){
			num += "1";
		}
		if (str.substr(i,2) == "��"){
			num += "2";
		}
		if (str.substr(i,2) == "��"){
			num += "3";
		}
		if (str.substr(i,2) == "��"){
			num += "4";
		}
		if (str.substr(i,2) == "��"){
			num += "5";
		}
		if (str.substr(i,2) == "½"){
			num += "6";
		}
		if (str.substr(i,2) == "��"){
			num += "7";
		}
		if (str.substr(i,2) == "��"){
			num += "8";
		}
		if (str.substr(i,2) == "��"){
			num += "9";
		}
			if (str.substr(i,2) == "��"){
			num += "0";
		}
		
	}
	return num;
}

int main(){
//	string a = "���";
//	cout << a.substr(0,2); 
	
	string str;
	
	str = ToSamll("��Ǫ���ʰҼ���Ǫ���ʰҼԪ��");
	cout << "��д��" << str << endl;
	str = ToNum(str);
	cout << "���֣�" << str << endl;
	
}


