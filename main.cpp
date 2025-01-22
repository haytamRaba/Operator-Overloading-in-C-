
#include <iostream>

using namespace std;

class complex{
  private :
  int real;
  int img;
  public:
  complex(int real=0,int img=0)
  {
      this->real=real;
      this->img=img;
  }
  friend complex operator+(complex const& obj,complex const& obj1);
  
  void print();
  
  friend istream & operator >>(istream &is,complex &c);
  
   friend ostream & operator <<(ostream &out,complex &c);

    
};

 istream & operator >>(istream &is,complex &c){
    cout<<"enter real :";
     is >> c.real;
     cout<<"enter img :";
      is >> c.img;
return is;
    
}

 ostream & operator <<(ostream &out,complex &c)
 {
     cout<<" number complexe :";
     out <<c.real<<" + i"<<c.img<<endl;
     return out;
 }
 
void complex :: print()
  {
      cout<<"real :"<<real<<endl;
      cout<<"img :"<<img<<endl;
      cout<<"-----------------\n";
  }
  
complex operator+(complex const& obj,complex const& obj1)
  {
      complex res;
      res.real=obj.real+obj1.real;
      res.img=obj.img+obj1.img;
      return res;
  }


int main() {
 
   complex c1;
   c1.print();
   
   complex c2(2,3);
   c2.print();
   
   complex c3;
   c3.print();
   
   c3=c1+c2;
   c3.print();
   
   complex c4;
   c4.print();
   
   cin >> c4;
   c4.print();
   
   c3=c4+c2;
   c3.print();
   
   cout << c3;
    
  

    return 0;
}