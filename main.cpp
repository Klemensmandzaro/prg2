#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    int b;

    cin>>a;
    b=a.length()-1a;
    for (int i=0; i<=b; i++)
    {
        if(a[i]!=a[b])
        {
            cout<<"Nie jest to palindrom";
            return 0;
        }
        b--;
    }
    cout<<"To jest palindrom";
    return 0;
}
