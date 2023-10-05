#include <iostream>
using namespace std;
int main ()

{
	int password=8451,cevap,islem=0,cekme,bakiye=2450,deposit,yenipassword,confirmpassword,tekrar;
first:
cout<<"Plase enter your card password"<<endl;
cin>>cevap;
if (cevap==password)
{start:
cout<<"Welcom Mohamad Saeed ALAJAM"<<endl;
cout<<"press 1 to check your cash"<<endl<<"press 2 to take money"<<endl<<"press 3 to deposit money"<<endl<<"press 4 to chang your card password"<<endl;
cin>>islem;
if (islem==1)
{cout<<"you have 2450 tl in your account"<<endl;  }
if (islem==2)
{ cout<<"How much you want to take  ?"<<endl;
paracekme:
cin>>cekme;
if (cekme<=bakiye)
{bakiye=bakiye-cekme;
cout<<"Now you have   "<<bakiye<<" tl in your account"<<endl;
}
else 
{cout<<"you dont have more than 2450 tl in your account"<<endl<<"plase enter less vaule"<<endl;
goto paracekme;
}
}
if (islem==3)
{cout<<"How much you want to deposit"<<endl;
cin>>deposit;
bakiye=bakiye+deposit;
cout<<"Now you have  "<<bakiye<<" tl in your account"<<endl;
}
if (islem==4)
{newpassword:
cout<<"Enter your new password"<<endl;
cin>>yenipassword;
cout<<"Confirm your newpassword"<<endl;
cin>>confirmpassword;
if (confirmpassword==yenipassword)
{password==yenipassword;
cout<<"your password updated sucssessfull"<<endl;
}
else 
{cout<<"your entered password is not identical"<<endl;
goto newpassword;
}
}

}
else 
{cout<<"you have enterd a wrong password"<<endl;	
goto first;
}
cout<<"-------------------------------------------------"<<endl;
cout<<"Do you want to make another process"<<endl<<"if Yes press 1"<<endl<<"if no press any key to get your card"<<endl;
cin>>tekrar;
while (tekrar==1)
{goto start;
}
cout<<"Have a nice days .................................."<<endl;


	
return 0;}
