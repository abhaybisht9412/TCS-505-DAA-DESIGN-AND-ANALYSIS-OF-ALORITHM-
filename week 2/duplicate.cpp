#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    int key, i;
    cout << "enter key";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int mid = n / 2;
    int count = 0;
    bool found = false;
    if (key == array[mid])
    {
        found = true;
        for (int k = 0; k < n; k++)
        {
            if (array[i] == key)
            {
                count++;
            }
        }
    }
    else if (key > array[mid])
    {
        for (i = mid; i < n; i++)
        {
            if (array[i] == key)
            {
                found = true;
                count++;
            }
        }
    }
    else if (key < array[mid])
    {
        for (i = 0; i < mid; i++)
        {
            if (array[i] == key)
            {
                found = true;
                count++;
            }
        }
    }
    if (found == true)
    {
        cout << "Present"
             << " " << key << " " << count << "times";
    }
    else
    {
        return -1;
    }
}