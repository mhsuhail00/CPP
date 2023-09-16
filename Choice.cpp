//Choice.cpp
//CREATED BY MOHAMMAD SUHAIL
//GITHUB@
#include <iostream>
#include <conio.h>
using namespace std;

//You can ENTER either NO, ONE or TWO VALUES SEPARATED By SPACE
//If NOT GIVEN it will take DEFAULT VALUES Provided by Editor
//Which Decimal You Pressed Doesn't matter you Press BACKSPACE will be Considered
//Value OTHER than DECIMAL are NOT CONSIDERED.

class choice
{
    private:
        int a,b,key=0;  // a is first Integer & b Second
        char r;
    public:
        void getchoice(int a/*Default value*/,int b/*Default Value*/)
        {
            this->a=a;
            this->b=b;
            int bit=0;
            cout << "Enter One or Two Spaced Integers. ";
            while(r!='\r')
            {
                r= getche();
                if (r==' ')
                {
                    key=1;
                    this->b=0;
                    continue;
                }
                if (static_cast<int>(r)<=47 || static_cast<int>(r)>=58)
                    continue;
                if (r=='\r')
                    break;
                if (bit==0)
                {
                    this->a=0;
                    bit=1;
                }
                if(key==0)
                    this->a=this->a*10+static_cast<int>(r)-48;
                else
                    this->b=this->b*10+static_cast<int>(r)-48;
            }
        }
        int get1() //return first Integer a
        {
            return a;
        }
        int get2() //return second Integer b
        {
            return b;
        }
    
    
};
int main()
{
    choice c;
    c.getchoice(-8,8);
    cout << "\na= " << c.get1() << endl
         << "b= " << c.get2() << endl;

    return 0;
}

