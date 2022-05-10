// bank program
#include<iostream>
// #include<cstring>
using namespace std;
class bank
{
    
public:
    char name[20];
    float bal;
    int acc_no;
    // char acc_type[20];
    void getdata()
    {
        cout<<"Enter Name of Account Holder : ";
        cin>>name;
        cout<<"Enter Account Number : ";
        cin>>acc_no;
        cout<<"Enter Balance in Account : ";
        cin>>bal;    
    }
    void putdata()
    {
        cout<<"Name of Account Holder : "<<name<<endl;
        cout<<"Account Number : "<<acc_no<<endl;
        cout<<"Balance in Account : "<<bal<<endl;
    }
    int getacc_no()
    {
        return acc_no;
    }
    void setacc_no(int n)
    {
        acc_no = n;
    }

};
    int main()
    {
        bank s1[10];
        int i,si,index;
        for (i=0;i<=3;i++)
        {
            s1[i].getdata();
        }
        cout<<"Enter Account Number to Search : ";
        cin>>si;
        for(i=0;i<3;i++)
        {
            if(s1[i].getacc_no()==si)
            {
                index=i;
                
                break;
                
            }
            s1[i].putdata();
        }
    }