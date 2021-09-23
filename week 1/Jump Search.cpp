#include <iostream>
#include <cmath>
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
    int step = sqrt(n);
    int str = 0;
    int end = step;
    ;
    while (array[step] < key and step < n)
    {
        str = end;
        end = end + step;
        if (end > n - 1) // if m exceeds the array size
        {
            return -1;
        }
    }
    for (int i = str; i < end; i++)
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