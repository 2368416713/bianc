#include<iostream>
#include"hjy.cpp" 
#include<string> 
using namespace std;
string result="";
/*
print���������ӡ0��9�����Ĵ�д.
thousandmaxprintʵ�ֲ�����һ��������������.
tenthousandmaxprintʵ�ֲ�����һ�ڵ������������.
hundredbillionmaxprintʵ�ֲ�����һ���ڵ��������.
check�ж����ֵ����䷶Χ 
flag��־�Ƿ���Ҫ�����Ԫ���� ��flag=0��־Ϊ��Ҫ����֮����Ҫ 
*/
//string print(long long int n);
void thousandmaxprint(long long int n,int flag);
void tenthousandmaxprint(long long int n,int flag);
void hundredbillionmaxprint(long long int n);

string check(string num){
	long long int n=my_atoi(num); 
	if (n >= 100000000){//����һ�� 
		hundredbillionmaxprint(n);
	}	
	else{
		if (n >= 10000)//����һ�� 
			tenthousandmaxprint(n,0);
		else //С��һ�� 
			thousandmaxprint(n,0);
	}
	return result;
}

void thousandmaxprint(long long int n,int flag) {
	int bit[4] = { 0,0,0,0 };
	bit[0] = n / 1000;//ǧλ 
	bit[1] = n % 1000 / 100;//��λ 
	bit[2] = n % 100 / 10;//ʮλ 
	bit[3] = n % 10;//��λ 
	int start = 0;
	//��ʼ״̬����,����Ϊ1ʱ�ŻῪʼ��ӡ
	int firstzero = 1;
	//Ѱ���м�ĵ�һ��0,��������Ϊ0
	int alwayszero = 1;
	//�Ƿ�ӵ�һ��0��ʼȫ����0

	//���n=0
	if (n == 0)
		result+=print(n);
	else {
		//��ʼ������tempcount��ʾ��ǰ����ڼ�λ 0=ǧλ��1=��λ 
		for (int tempcount = 0; tempcount < 4; tempcount++) {
			if (bit[tempcount] != 0 || tempcount == 3)
				//Ѱ�ҵ����һλ���Ѿ����������һλ
				start = 1;
			if (start) {
				if (bit[tempcount] != 0) {
					if (tempcount == 0) {
						result+=print(bit[tempcount]);
						result+="Ǫ";
					}
					if (tempcount == 1) {
						result+=print(bit[tempcount]);
						result+="��";
					}
					if (tempcount == 2) {
						result+=print(bit[tempcount]);
						result+="ʰ";
					}
					if (tempcount == 3) {
						result+=print(bit[tempcount]);
					}
				}
				else {
					if (firstzero && tempcount < 3) {
						//����ǵ�һ��0�Ҳ�����ĩλ,���ж��Ƿ�֮��ȫ��0.
						for (int i = tempcount; i < 4; i++)
							if (bit[i] != 0)
								alwayszero = 0;
						if (!alwayszero)
							//�������ȫ����0,�����һ��0�ҽ���һ��0״̬��Ϊ0.
							result+=print(bit[tempcount]);
						firstzero = 0;
					}
				}
			}
		}
	}
	if(flag==0) result+="Ԫ��";
}

/*
���������Ϻ������µĲ���Ӧ�����涨��õĺ���.
*/
void tenthousandmaxprint(long long int n,int flag) {
	int n1 = n / 10000;
	int n2 = n % 10000;
	if (n1 != 0) {
		thousandmaxprint(n1,1);
		result+="��";
	}
	if (n2 != 0) {
		if (n2 < 1000) result+="��";
		thousandmaxprint(n2,1);
	}
	if(flag==0) result+="Ԫ��";
}
/*
ԭ�����ͬ��.
*/
void hundredbillionmaxprint(long long int n) {
	int n1 = n / 100000000;
	int n2 = n % 100000000;
	thousandmaxprint(n1,1);
	result+="��";
	if (n2 != 0)
		tenthousandmaxprint(n2,1);
	result+="Ԫ��";
}

