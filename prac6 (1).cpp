#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;


class employeedetail
{
    public:
    int eid;
    string name;
    string qualification;
    float exp;
    long long int contact;

    void getdata()
    {
        cout<<"Employee ID : ";
        cin>>eid;
        fflush(stdin);
        cout<<"Employee name : ";
        getline(cin,name);
        cout<<"Qualification : ";
        getline(cin,qualification);
        cout<<"Experience(in years) : ";
        cin>>exp;
        cout<<"Contact number : ";
        cin>>contact;
    }
    void putdata()
    {
        cout<<"-----------------------------------------------\n"<<endl;
        cout<<"Employee ID"<<setw(6)<<": "<<eid<<endl;
        cout<<"Employee Name"<<setw(4)<<": "<<name<<endl;
        cout<<"Qualification"<<setw(4)<<": "<<qualification<<endl;
        cout<<"Experience"<<setw(7)<<": "<<exp<<" years"<<endl;
        cout<<"Contact Number"<<setw(3)<<": "<<contact<<endl;
        cout<<"\n-----------------------------------------------"<<endl;
    }
};
float avgexp(employeedetail *b,int n)
{
    int i=0;
    float total=0;
    for(i=0;i<n;i++)
    {
        total+=b[i].exp;
    }
    return total/i;
}


int main()
{
    employeedetail *e;
    int n,i,j,employeeid;
    char ch;
    cout<<"Enter the number of employee :";
    cin>>n;
    e=new employeedetail[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the details of employee"<<i+1<<endl<<endl;
        e[i].getdata();
    }

    cout <<"Get details of employee"<<endl<<endl;

    do
    {
        cout <<"Enter an employee id :";
        cin>>employeeid;

        for(i=0;i<n;i++)
        {

            if(employeeid==e[i].eid)
            {
                e[i].putdata();
                break;
            }
            if(i==(n-1))
            {
                cout<<"******************************************\n"<<endl;
                cout<<"ERROR : ENTERED EMPLOYEE ID DOESN\'T EXIST\n"<<endl;
                cout<<"******************************************\n"<<endl;
            }
        }

        cout<<"Press Y to get another employee detail, Press N to exit : ";
        cin>>ch;
    }while(ch=='Y');

    cout <<"Average experience of all the employee of the charusat is "<<avgexp(e,n)<<endl<<endl;

    return 0;
}
