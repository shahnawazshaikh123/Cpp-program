//program to swap private data using friend function with two class
#include<iostream.h>
#include<conio.h>
class B;
class A
{int x;
   public:
   void input()
    {cout<<"enter first number to be swap=";
      cin>>x;}
     void output()
    {cout<<endl<<"first="<<x;}
    friend void swap(A &,B &);      //using reference
};
class B
{ int y;
  public:
  void input()
  {cout<<"enter second number to be swap=";
     cin>>y;}
    void output()
    { cout<<endl<<"second="<<y;}
    friend void swap(A &a,B &b);        //using reference
};
void swap(A &a,B &b)
{ int t=0;
   t=a.x;
   a.x=b.y;
   b.y=t;
}
 int main()
 { A a;
   B b;
   clrscr();
   a.input();
   b.input();
   cout<<"number before swap";
   a.output();
   b.output();
   swap(a,b);
   cout<<endl<<"number after swap";
   a.output();
   b.output();
   getch();
   return 0;
   }


