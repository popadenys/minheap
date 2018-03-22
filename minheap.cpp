#include<iostream>
using namespace std;
int main ()
{

    int n, tata, fiu;
    int V[100];
    int M[100];
    cout<<"n= "; cin>>n;
    cout<<"Elemente: ";
    for(int i=1; i<=n; i++)
    cin>>V[i];
    for(int i=2; i<=n; i++)
    {
        tata=int(i/2);
        while(V[tata]>V[i] && tata>=1)
        {
            int last=V[tata];
            V[tata]=V[i];
            V[i]=last;
            int fiu=tata;
            tata=int(fiu/2);
        }
    }
cout<<endl;
for(int i=1; i<=n; i++)
cout<<V[i]<<" ";
return 0;

}









