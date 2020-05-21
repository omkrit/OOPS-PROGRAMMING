#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter an array size : ";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    cout<<"Elements are \n";
     for(int i=0;i<n;i++)
        cout<<" "<<p[i];
     delete[] p;
     cout<<"\nDeleted successfully ";
    return 0;
}
