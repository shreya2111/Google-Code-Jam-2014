#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  int i,T;
  double C,F,X;
  cin>>T;

  double r=2,t1,t2;
  
  //start
  for(i=0;i<T;i++)
    { 

    cin>>C;
    cin>>F;
    cin>>X;
    
    int c=1;
    
    t1=X/r;
    
    t2=(C/r)+(X/(r+F));
    while(t1>t2)
      {     t1=t2;
	    t2=t2+(C-X)/(r+c*F)+X/(r+(c+1)*F);
	    c+=1;   
       }   
    cout<<fixed;
    cout<<"Case #"<<i+1<<": "<<setprecision(7)<<t1<<endl;
    }

  return 0;
}
