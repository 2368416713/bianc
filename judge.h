//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<cstring>
//using namespace std;
//int ifisxiaoxie(string s);

//int main()
//{
//	
//	string s;
//	cin>>s;
//	if( ifisdaxie(s)==1 )
//	{
//		cout<<"hefa";
//// 	    return 0;//�ǺϷ���д
//	}
//	else
//	{
//		cout<<"buhefa";
//	}
//	return 0;
//	
//}



//int judge(string s ){
//	int flag;
//	if (ifisxiaoxie(s))
//	{
//		return 1; //�ǺϷ�Сд
//	}
//	else
//	{
//		return 0;
//	}
////	if(ifisdaxie(s))
////	{
//// 	    return 0;//�ǺϷ���д
////	}
////	return -1; //���벻�Ϸ�
//}


int ifisxiaoxie(string input)
{
	int flag=0;
	int i=0;
	while(i<input.size())
	{
		if(!isdigit(input[i])){
//		cout<<"�������";
		return 0;
		}
		i++;
	}
	if(flag==1)return 1;

}
//
//int ifisdaxie(string s)
//{
//	
// 	string a = {"��", "Ҽ", "��", "��", "��", "��", "½", "��", "��", "��","ʰ"};
//	string unit = {"Ԫ", "ʰ", "��", "Ǫ", "��", "ʰ", "��", "Ǫ", "��", "ʰ", "��", "Ǫ", "��", "ʰ", "��", "Ǫ" };
//	char sav[20];
//	int i=0;
//	int len = s.length();
//    while(len--)
//    {
//    	string *b = &s[len];
//
//		if(strstr(unit.c_str(),b)==NULL)
//		{
//
//		 	if(strstr(a.c_str(),b)==NULL)
//		 	{
//			    return 0;
//            }
//			 else
//			 {
//			 	continue;
//			 }
//		}
//		else
//		{
//			sav[i++]=b;
//			continue;
//			
//		}
//		
//	
//	}
//	
	
//	int n;
//	n = strlen(sav);
//	if(strncmp(unit,sav,n))
//	{
//		return 1;
//	}






//	char *p,*q;
//	p = &unit;
//	q = &sav;
//	int j=0;

//	for(int i=0;i<n;i++;)
//	{
//		while(q!=NULL)
//		{
//			if (*p = *q)
//			{
//				p++;
//				q++;
//                break��
//			}
//			else
//			{
//				q++
//			}
//		}
//		if(q==NULL)
//		{
//			return 0 ;
//		}
//	}
//	return 1;
//}

