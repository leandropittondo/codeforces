#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::string word;
        std::cin >> word;

        char firstChar = word[0];
        char lastChar = word.back();
        int wordLength = word.length();

        if (wordLength <= 10)
        {
            std::cout << word << std::endl;
        }
        else
        {
            std::cout << firstChar << wordLength - 2 << lastChar << std::endl;
        }
    }

    return 0;
}