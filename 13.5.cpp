#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите N"<<endl;
    int n;
    cin>>n;
    vector<float> a(n);
    cout<<"Введите элементы массива"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<n; i++)
    {
        if (i%2==1)
        {
            cout<<a[i]<<endl;
        }
    }
    for (int i=n-1; i>=0; i--)
    {
        if (i%2==0)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
