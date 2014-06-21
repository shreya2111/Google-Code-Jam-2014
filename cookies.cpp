#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  int i,T;
  double C,F,X;
 

  cin>>T;
  
  double r=2,R,t1,t2;
 
 //start
  for(i=0;i<T;i++)
  {
     cin>>C;
  cin>>F;
  cin>>X;
 
    int a=1,c=1;
    R=r;
    t1=X/R;
    R=r+F;
    t2=(C/r)+(X/R);
    while(a)
      {
	
	
	if(t1>t2)
	  {
	    t1=t2;
	    R=R+F;
	    t2=t2+(C-X)/(r+c*F)+X/(r+(c+1)*F);
	    c+=1;
	    //cout <<fixed;
	    //cout<<"Case #"<<i+1<<": "<<setprecision(7)<<t2;
	    a=1;
	  }
	else if(t1<t2)
	  {
	    
	    cout<<"Case #"<<i+1<<": "<<setprecision(7)<<t1;
	    a=0;
	  }
      }

}

  return 0;
}
