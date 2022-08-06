#include <iostream>
#include <string.h>
using namespace std;
struct personal_info{
char name[30];
    int age;

};
struct student{
    personal_info info;
    float grade[3];
};
student add(student a[],int x,int j)
{
    
    for (int i=j;i<j+x;i++)
    {

    cout<<"\t\t\t\t\t\t\t\t\t\tenter name: \n\t\t\t\t\t\t\t\t\t\t";
    cin>>a[i].info.name;
    cout<<"\t\t\t\t\t\t\t\t\t\tenter age:\n\t\t\t\t\t\t\t\t\t\t";
    age:
    cin>>a[i].info.age;
    if(a[i].info.age<18||a[i].info.age>50)
    {
        cout<<"\t\t\t\t\t\t\t\t\t\twrong input try again!!\n\t\t\t\t\t\t\t\t\t\t";
        goto age;
    }
    cout<<"\t\t\t\t\t\t\t\t\t\tenter the 3 grades of the student :\n\t\t\t\t\t\t\t\t\t\t";
    cin>>a[i].grade[0];cout<<"\t\t\t\t\t\t\t\t\t\t";cin>>a[i].grade[1];cout<<"\t\t\t\t\t\t\t\t\t\t";cin>>a[i].grade[2];
    cout<<"\t\t\t\t\t\t\t\t\t\t.........................\n";
    }return *a;
j+=x;}
void display(student a[],int x)
{ cout<<"\n\t\t\t\t\t\t\t\t\t\t\t+----------------------+\n\t\t\t\t\t\t\t\t\t\t\t|   Display students   |\n\t\t\t\t\t\t\t\t\t\t\t+----------------------+";
	
    if (x==0)
    {
        cout<<"\n\t\t\t\t\t\t\t\t\t\tempty!!no student is added\n\t\t\t\t\t\t\t\t\t\t";
    }
    else{
    cout<<"\n\t\t\t\t\t\t\t\tstudent\t\tname\t\tage\t\tgrade_1\t\tgrade_2\t\tgrade_3\n";
    for(int i=0;i<x;i++)
    {
        cout<<"\t\t\t\t\t\t\t\t";
        cout<<i+1<<"\t\t"<<a[i].info.name<<"\t\t"<<a[i].info.age<<"\t\t"<<a[i].grade[0]<<"\t\t"<<a[i].grade[1]<<"\t\t"<<a[i].grade[2]<<endl;

    }
    cout<<"\n\t\t\t\t\t\t\t\t\t\t";
    
    }
}
void search(student a[],int b)
{int x=0;
	char sname[30];
	cout<<"\t\t\t\t\t\t\t\t\t\tenter the name you want to search \n\t\t\t\t\t\t\t\t\t\t";
	cin.ignore();
	gets(sname);
	
    
    for(int i=0;i<b;i++)
    {
    	if (strncasecmp(sname,a[i].info.name,strlen(sname))==0)
    	{x++;
		
        //cout<<"student "<<i+1<<endl;
        cout<<"\t\t\t\t\t\t\t\tname:"<<a[i].info.name<<endl;
        cout<<"\t\t\t\t\t\t\t\tage:"<<a[i].info.age;
        cout<<"\n\t\t\t\t\t\t\t\tgrades:"<<a[i].grade[0]<<" "<<a[i].grade[1]<<" "<<a[i].grade[2];
cout<<"\n\t\t\t\t\t\t\t\t..........................................\n";
    }}
    if (x==0)
    {
        cout<<"\t\t\t\t\t\t\t\tno name is found by this name\n\n\n\t\t\t\t\t\t\t\t";
    }
    

}

int main()
{char x;int j=0;
menu:
    student s[10];
    cout<<"\t\t\t\t\t\t\t\t\t\t--------------------\n\t\t\t\t\t\t\t\t\t\t|\tMenu\t   |\n\t\t\t\t\t\t\t\t\t\t--------------------\n\t\t\t\t\t\t\t\t\t\t|1.add student\t   |\n\t\t\t\t\t\t\t\t\t\t--------------------\n\t\t\t\t\t\t\t\t\t\t|2.display students|\n\t\t\t\t\t\t\t\t\t\t--------------------\n\t\t\t\t\t\t\t\t\t\t|3.Search by name  |\n\t\t\t\t\t\t\t\t\t\t--------------------\n\t\t\t\t\t\t\t\t\t\t|4.Exit\t\t   |\n\t\t\t\t\t\t\t\t\t\t--------------------\n\t\t\t\t\t\t\t\t\t\t";
    cin>>x;
    switch(x){
case '1':
    int num;
    cout<<"\t\t\t\t\t\t\t\t\t\tnumber of students: \n\t\t\t\t\t\t\t\t\t\t";
    cin>>num;
  /*  for (int i=j;i<j+num;i++)
    {
        s[i]=add(s[i]);
    }*/
    add(s,num,j);
    j+=num;
    system("cls");
    goto menu;
case '2':

    display(s,j);
    system("pause");
    system ("cls");
    goto menu;
case '3':
search(s,j);
system("pause");
system ("cls");
    goto menu;    
case '4':
    exit(0);
default:
    cout<<"wrong input ,try again!";
    system("cls");
    goto menu;
    }

    return 0;
}

