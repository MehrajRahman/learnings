#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 15, 18, 22, 24, 26, 28, 45, 78, 85, 99, 100};
    int low_index = 0;
    int high_index = 15;

    int num = 78;

    int mid_index;
    while (1)
    {
        mid_index = (low_index + high_index) / 2;

        if (num == arr[mid_index])
        {
            break;
        }

        if (num < arr[mid_index])
        {
            high_index = mid_index - 1;
        }

        else
        {
            low_index = mid_index + 1;
        }
    }

    if (low_index > high_index)
    {
        cout << num << " is not in the array!";
    }
    else
    {
        cout << num << " is in the array!";
    }

    return 0;
}