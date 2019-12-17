#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Введите N" << endl;
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 2 + 1;
        cout << arr[i] << endl;
    }
    return 0;
}
