#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    int weight = 30;
    int height = 8;

    for (int y = 0; y < height + 1; y++)
    {
        for (int x = 0; x < weight + 1; x++)
        {
            if (x < weight / 2  && y < height / 2)
            {
                

                if (x % 2 == 0)
                {
                    SetConsoleTextAttribute(h, 1);
                    cout << (char)178;
                }

                else
                {
                    SetConsoleTextAttribute(h, 7);
                    cout << "*";
                }

            }


            else if (x > weight / 2 - 2 && y < height / 2)
            {


                if (y % 2 == 0)
                {
                    SetConsoleTextAttribute(h, 4);
                    cout << (char)178;
                }

                else
                {
                    SetConsoleTextAttribute(h, 7);
                    cout << (char)178;
                }

            }


            else
            {
                if (y % 2 == 0)
                {
                    SetConsoleTextAttribute(h, 4);
                    cout << (char)178;
                }

                else
                {
                    SetConsoleTextAttribute(h, 7);
                    cout << (char)178;
                }
            }
        }
        cout << "\n";
    }
}
