#include <iostream>

using namespace std;

int main()
{
    int a,b,i,s;
    cin>>a>>b;
    s=0;
    for (i=a;i<=b;i+=1)
        s=s+i;
    cout<<s;
    return 0;
}
