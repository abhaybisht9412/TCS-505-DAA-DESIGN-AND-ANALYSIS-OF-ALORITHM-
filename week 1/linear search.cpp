#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "enter key";
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            found = true;
        }
    }
    if (found == true)
    {
        cout << "present"
             << " " << key << endl;
    }
    else
    {
        cout << "not present"
             << " " << key << endl;
    }
}