						// 21 DYS OF PROGRAMMING CHALLENGE - DAY 17

// operator overloading example

#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float img;
public:
    Complex();
    Complex(Complex &);
    Complex operator +(const Complex &);
    Complex operator -(const Complex &);
    Complex operator *(const Complex &);
    Complex operator /(const Complex &);

    friend istream& operator >>(istream& , Complex&);
    friend ostream& operator <<(ostream& , Complex&);
};

Complex::Complex()
{
    real = 0;
    img = 0;
}

Complex::Complex(Complex &comp)
{
    this->real = comp.real;
    this->img = comp.img;
}

Complex Complex::operator +(const Complex &sec)
{
    Complex Res;
    Res.real = this->real + sec.real;
    Res.img = this->img + sec.img;
    return Res;
}

Complex Complex::operator -(const Complex &sec)
{
    Complex Res;
    Res.real = this->real - sec.real;
    Res.img = this->img - sec.img;
    return Res;
}

Complex Complex::operator *(const Complex &sec)
{
    Complex Res;
    Res.real = this->real*sec.real - this->img*sec.img;
    Res.img = this->real*sec.img + this->img*sec.real;
    return Res;
}
Complex Complex::operator /(const Complex &sec)
{
    Complex Res;
    Complex conj;
    conj.real = this->real;
    conj.img = -this->real;

    float square = sec.real*sec.real + sec.img*sec.img;

    Res.real = ((*this)*conj).real/square;
    Res.img = ((*this)*conj).img/square;

    return Res;
}
istream& operator >>(istream& in, Complex& comp)
{
    in>>comp.real>>comp.img;
    return in;
}

ostream& operator <<(ostream& out, Complex& comp)
{
    if(comp.img >= 0)
        out<<comp.real<<" + "<<comp.img<<"j";
    else
    {
        out<<comp.real<<" - "<<(-comp.img)<<"j";
    }
    
    return out;
}
void Addition();
void Subtraction();
void Multiply();
void Division();
int main()
{
    int choice;
    cout<<endl;
    do
    {
    	cout<<endl;
        cout<<"Following are the options available: "<<endl;
        cout<<"1. Addition  (+)"<<endl;
        cout<<"2. Subtraction (-) "<<endl;
        cout<<"3. Multiplication (*) "<<endl;
        cout<<"4. Division (/) "<<endl;
        cout<<"5. Copy Constructor "<<endl;
        cout<<"Press 0 to EXIT"<<endl;
        cout<<endl;
        cout<<"Enter your choice: "<<endl;
    	cin>>choice;
        switch (choice)
        {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiply();
            break;
        case 4:
            Division();
            break;
        case 5:
            Complex a,b;
            cout<<"Enter Complex No. : ";
            cin>>a;
            b = Complex(a);
            cout<<"Copy : ";
            cout<<b;
            cout<<endl;
        }
    } while (choice != 0);
    
    return 0;
}
void Addition()
{
    Complex comp1, comp2,comp3;
    cout<<"Enter First Complex : ";
    cin>>comp1;
    cout<<"Enter Secound Complex: ";
    cin>>comp2;
    cout<<"Result : ";
    comp3 = comp1+comp2;
    cout<<comp3;
    cout<<endl;
}
void Subtraction()
{
    Complex comp1, comp2,comp3;
    cout<<"Enter First Complex : ";
    cin>>comp1;
    cout<<"Enter Secound Complex : ";
    cin>>comp2;
    cout<<"Result : ";
    comp3 = comp1-comp2;
    cout<<comp3;
    cout<<endl;
}
void Multiply()
{
    Complex comp1, comp2,comp3;
    cout<<"Enter First Complex : ";
    cin>>comp1;
    cout<<"Enter Secound Complex : ";
    cin>>comp2;
    cout<<"Result : ";
    comp3 = comp1*comp2;
    cout<<comp3;
    cout<<endl;
}
void Division()
{
    Complex comp1, comp2,comp3;
    cout<<"Enter First Complex : ";
    cin>>comp1;
    cout<<"Enter Secound Complex : ";
    cin>>comp2;
    cout<<"Result : ";
    comp3 = comp1/comp2;
    cout<<comp3;
    cout<<endl;
}
