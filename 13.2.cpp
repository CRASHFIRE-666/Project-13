#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите N" << endl;
    int n;
    float a, d;
    cin >> n;
    cout << "Введите A и D" << endl;
    cin >> a >> d;
    vector<float> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = a * pow(d, i);
        cout << arr[i] << endl;
    }
    return 0;
}
