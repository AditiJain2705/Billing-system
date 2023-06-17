#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>
using namespace std;
class northindian
{
	public:
		int dalbati()
		{
			return 150;
		}
		int panjabipaneer()
		{
			return 170;
		}
		int cholekulcha()
		{
			return 120;
		}
};
class chinese
{
	public:
		int noodles()
		{
			return 80;
		}
		int manchurian()
		{
			return 90;
	    }
	    int drymanchurian()
	    {
	    	return 120;
		}
		int combonoodlesmanchurian()
		{
			return 150;
		}
};
class southindian
{
	public:
		int idlisambhar()
		{
			return 75;
		}
		int dosa()
		{
			return 90;
		}
		int sambharvada()
		{
			return 140;
		}
};
struct item
{
	int price,qty,total;
	char n[20];
};
class order:public northindian,public chinese,public southindian
{
	public:
		int subtotal=0,cgst=0,sgst=0,nettotal=0,k,find,q=0;
		int flag=-1;
		char m[20];
		void additem(int count)
		{
			cout<<endl<<"********************************************************************************************";
			cout<<endl<<"Press 1: for North Indian";
			cout<<endl<<"Press 2: for Chinese";
			cout<<endl<<"Press 3: for South Indian";
			cout<<endl<<"Enter your choice";
			cin>>ch;
			if(ch==1)
			{
			system("cls");
			cout<<endl<<"********************************************************************************************";
			cout<<endl<<"Press 1: for Dalbati"<<dalbati();
			cout<<endl<<"Press 2: for Panjabi paneer"<<panjabipaneer();
			cout<<endl<<"Press 3: for Cholekulcha"<<cholekulcha();
			cout<<endl<<"Enter your Choice";
			cin>>pro;
			if(pro==1)
			{
				strcpy(ob[count].n,"Dal Bati");
				ob[count].price=dalbati();
				cout<<endl<<"Enter quantity:";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
			}
			else if(pro==2)
			{
				strcpy(ob[count].n,"Panjabi paneer");
				ob[count].price= panjabipaneer();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
			}
			else if(pro==3)
			{
				strcpy(ob[count].n,"Chole kulcha");
				ob[count].price=cholekulcha();
				cout<<endl<<"Enter quantity:";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
			
	    	}
	   	
		}
		else if(ch==2)
		{
			system("cls");
			cout<<endl<<"********************************************************************************************";
			cout<<endl<<"Press 1: for Noodles"<<noodles();
			cout<<endl<<"Press 2: for Manchurian"<<manchurian();
			cout<<endl<<" Press 3: for Drymanchurian"<<drymanchurian();
			cout<<endl<<"Press 4: for Combo Noodles Manchurian"<<combonoodlesmanchurian();
			cin>>pre;
			if(pre==1)
			{
				strcpy(ob[count].n,"Noodles");
				ob[count].price=noodles();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
			}
				if(pre==2)
			{
				strcpy(ob[count].n,"Manchurian");
				ob[count].price=noodles();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
			}
				if(pre==3)
			{
				strcpy(ob[count].n,"Drymanchurian");
				ob[count].price=noodles();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
			}
			if(pre==4)
			{
				strcpy(ob[count].n," Combo Noodles Manchurian");
				ob[count].price=combonoodlesmanchurian();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
			}
		}
		else if(ch==3)
		{
			cout<<"**************************************************************************************************";
				cout<<endl<<"Press 1: for idlisambhar"<<idlisambhar();
				cout<<endl<<"Press 2: for Dosa"<<dosa();
				cout<<endl<<"Press 3: for Sambhar wada"<<sambharvada();
				
				cin>>tre;
				if(tre==1)
				{
				strcpy(ob[count].n,"Idli sambhar");
				ob[count].price=idlisambhar();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
					
				}
				else if(tre==2)
				{
				strcpy(ob[count].n," Dosa");	
				ob[count].price=dosa();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
				}
				else if(tre==3)
				{
				strcpy(ob[count].n,"Sambharvada");			
				ob[count].price=sambharvada();
				cout<<endl<<"Enter quantity";
				cin>>qty;
				ob[count].qty=qty;
				ob[count].total=ob[count].price*ob[count].qty;
					
				}
		}
       }
void displayorder(int count)
{
	
	cout<<endl<<"Sno\t\tItem\t\tQuantity\t\tcost price\t\tTotal";
	cout<<endl<<"-------------------------------------------------------------------------------------------------";
	for(i=0;i<count;i=i+1)
	{
		if(ob[i].qty>0)
		{
			//cout<<endl<<i+1<<"\t\t"<<setw(7)<<ob[i].n<<"\t\t"<<ob[i].qty<<"\t\t"<<ob[i].price<<"\t\t"<<ob[i].total;
			printf("\n%d\t%-20.20s\t%d\t\t\t%d\t\t\t%d",i+1,ob[i].n,ob[i].qty,ob[i].price,ob[i].total);
		}
	}
	for(i=0;i<count;i=i+1)
	{
		
		subtotal=ob[i].total+subtotal;	
	}
	cout<<endl<<"-------------------------------------------------------------------------------------------";
	cout<<endl<<"Subtotal"<<subtotal;
		sgst=cgst=(subtotal*9)/100;
		nettotal=sgst+cgst+subtotal;
		cout<<endl<<"SGST"<<sgst;
		cout<<endl<<"CGST"<<cgst;
		cout<<endl<<"Payable Amount"<<nettotal;
		cout<<endl<<"---------------------------------------------------------------------------------------------";
}

void updateorder(int count)
{
	subtotal=0;
	nettotal=0;
	cout<<endl<<"Enter the no. dish";
	cout<<endl;
	cin>>find;
	find--;
	for(i=0;i<count;i=i+1)
	{
		
		
		cout<<"Enter the quantity";
		cin>>qty;
		ob[find].qty=qty;
		ob[find].total=ob[find].price*qty;
		displayorder(count);
		cout<<endl<<"*************************************************************************************************";
	}
}
private:
	item ob[100];
	int ch,pro,pre,qty,tre,i;
};
int count=0;
main()
{
	order k;
	int m,ch=0,type;
	while(1)
	{
		cout<<endl<<"*******************************************************************************************";
		cout<<endl<<"Press 1: for Add new Item";
		cout<<endl<<"Press 2:Display placed order";
		cout<<endl<<"Press 3: Update order ";
		cout<<endl<<"Enter your choice";
		cin>>ch;
		if(ch==1)
		{
			system("cls");
			k.additem(count);
			count++;
		}
		else if (ch==2)
		{
			system("cls");
			k.displayorder(count);
			
		}
		else if(ch==3)
		{
			system("cls");
			cout<<endl<<count;
			k.displayorder(count);
			k.updateorder(count);
			
		}
	}
}

