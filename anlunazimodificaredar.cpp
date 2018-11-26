#include<iostream>
using namespace std;
unsigned int n;
unsigned int ziua;
unsigned int luna;
unsigned int anul;
unsigned cod=0;
int main()
{
cout<<" Day = ";cin>>ziua;
cout<<" Month = ";cin>>luna;
cout<<" Year = ";cin>>anul;
anul=anul<<21;
cod<<cod/anul;
luna=luna<<17;
cod=cod/luna;
cod=cod/ziua;
;cout<<"codul datei este=";cod;
cout<<endl<<" (zi<<21/luna<<17//18) = 1 ; (luna<<17/zi<<21//18) =2 ";
int code;
cin>>code;
if (code==1) {
                     cout<<endl<<" French format "<<endl;
                    cout<<"ziua=";cin>>ziua;
                    cout<<"luna=";cin>>luna;
                    cout<<"anul=";cin>>anul;
                    n=n/ziua;
                    luna=luna
                    }
else
if (code==2)  {
                     cout<<endl<<" English format "<<endl;
                     // ...
                     cout<<n;
                    }
else
{ cout<<endl<<" Sorry , no banans today !"; }
return  0;
}




