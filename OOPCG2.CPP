#include<iostream.h>
#include<conio.h>
#include<string.h>
class data
{
char name[20],address[20],dob[20],cldiv[10],lic[10];
char bg;
static int c;
int roll;
long int phone;
public:
data();
static int getcount();
void getdata();
void show();
data(data *obj);
data(int roll,long int phone, char name[],char address[],char dob[],char cldiv[],char lic[]);
~data();
};
int data::c=0;
data::data(data *obj)
{
cout<<"\n Copy constructor implemented";
}
data::~data()
{
cout<<"\n Destructor called\n";
}
void data::getdata()
{
cout<<"Enter roll number:\n";
cin>>roll;
cout<<"\nEnter telephone number:\n";
cin>>phone;
cout<<"\nEnter name:\n ";
cin>>name;
cout<<"\nEnter address:\n";
cin>>address;
cout<<"\nEnter data of birth:\n";
cin>>dob;
cout<<"\nEnter class and division:\n";
cin>>cldiv;
cout<<"\nEnter licence number:\n";
cin>>lic;
}
void data::show()
{
cout<<"\nName:"<<name;
cout<<"\nRoll number:"<<roll;
cout<<"\nTelephone number:"<<phone;
cout<<"\nAddress:"<<address;
cout<<"\ndata of birth:"<<dob;
cout<<"\nClass and division:"<<cldiv;
cout<<"\nLicence number:"<<lic;
}
data::data(int roll,long int phone,char name[],char address[],char dob[],char cldiv[],char lic[])
{
cout<<"\nParameterized contructor";
c++;
this->roll=roll;
this->phone=phone;
strcpy(this->name,name);
strcpy(this->address,address);
strcpy(this->dob,dob);
strcpy(this->cldiv,cldiv);
strcpy(this->lic,lic);
}
data::data()
{
roll=0;
phone=0;
strcpy(name,NULL);
strcpy(address,NULL);
strcpy(dob," ");
strcpy(cldiv," ");
strcpy(lic," ");
cout<<"\nDefault constructor";
c++;
}
int data::getcount()
{
return c;
}
int main()
{
clrscr();
int num,i;
data *d1=new data();
d1->show();
getch();
delete d1;
getch();
data *d2=new data(23,9822794182,"Dhruva","Kala nagar","22.02.97","SE A","MSIN92U");
d2->show();
data *d3=new data(d2);
d3->show();
delete d2;
cout<<"\nTotal number of students:"<<data::getcount();
cout<<"\nEnter size of database:";
cin>>num;
data dx[10];
for(i=0;i<num;i++)
	dx[i].getdata();
for(i=0;i<num;i++)
	dx[i].show();
cout<<"\nNumber of constructors calls and total number of objects:"<<data::getcount();
getch();
return 0;
}