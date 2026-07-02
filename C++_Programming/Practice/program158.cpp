#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Parameterized constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor\n";
            iSize = X;              //Characteristics initilation 
            Arr = new int[iSize];   //Resourse allocation
        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete []Arr;          //Resourse deallocation
        }
};


int main()
{
    ArrayX aobj1(5);  
    
    return 0;
}