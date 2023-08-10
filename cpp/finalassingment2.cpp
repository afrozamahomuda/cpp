
#include<iostream>
using namespace std;
class employee
{
protected:
    string name ,id,joining_date;
    int salary;
    public:
    employee()
    {
        cout<<"default constructor"<<endl;
    }
    employee (string na,string i,string jd,int sal )
    {
        name=na;
        id=i;
        joining_date=jd;
        salary=sal;


    }

    ~employee()
    {
        cout<<"Destructor"<<endl;
    }

    void getValue ()
    {
        cout<<"enter employe name: ";
        cin>>name;
        cout<<"enter employe ID: ";
        cin>>id;
        cout<<"enter employe joining date: ";
        cin>>joining_date;
        cout<<"enter employe salary: ";
        cin>>salary;


    }
    void showValue()
    {
        cout<<"employee name : "<<name<<endl;
         cout<<"employee ID : "<<id<<endl;
          cout<<"employee joining Date: "<<joining_date<<endl;
           cout<<"employee salary : "<<salary<<endl;
    }

};
int main()
{
    employee e1;
    cout<<"               enter no.1 employee values"<<endl;
    e1.getValue();
    cout<<"               Employee no.1 information"<<endl;
    e1.showValue();
    employee e2;
    cout<<"               enter no.2 employee values"<<endl;
    e2.getValue();

    cout<<"               employee no.2 information"<<endl;
    e2.showValue();
}
