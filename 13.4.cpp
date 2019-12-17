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
    for (int i=0; i<n/2; i++)
    {
        cout<<a[i]<<endl;
        cout<<a[n-i-1]<<endl;
    }
    if (n%2==1)
    {
        cout<<a[n/2];
    }
    return 0;
}
