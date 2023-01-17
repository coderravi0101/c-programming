//ADDITION PROGRAM WITH THE HELP OF CONSTRUCTOR IN C++ PROGRAM
#include<iostream>
using namespace std;

class addition
{
    public:
    int x;
    int y;
    add();
    addition(int a,int b)
    {
        x=a;
        y=b;
    }
};
 int addition::add()//pta chl ske kesclass ka hai
 {
    return x+y;
 }

int main()
{
    addition a= addition(2,3);
    int z=a.add();
    cout<<"addition of\t"<<a.x<<"and\t"<<a.y<<"is\t"<<z<<endl;
    return 0;
}
