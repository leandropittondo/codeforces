#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2)
        {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}