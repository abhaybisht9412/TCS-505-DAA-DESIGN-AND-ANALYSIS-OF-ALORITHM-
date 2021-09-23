#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k;
    int array[n];
    bool found = false;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (array[i] + array[j] == array[k])
                {
                    found = true;
                    cout << array[i] << " " << array[j] << "=" << array[k] << endl;
                }
            }
        }
    }
    if (found == false)
    {
        cout << "Sequence does not exist" << endl;
    }
}