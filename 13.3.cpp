#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите N"<<endl;
    int n;
    float a,b,sum;
    cin>>n;
    cout<<"Введите A и B"<<endl;
    cin>>a>>b;
    vector<float> arr(n);
    arr[0]=a;
    arr[1]=b;
    sum=a+b;
    for (int i=2; i<n; i++)
    {
        arr[i]=sum;
        sum+=arr[i];
        cout<<arr[i]<<endl;
    }
    return 0;
}
