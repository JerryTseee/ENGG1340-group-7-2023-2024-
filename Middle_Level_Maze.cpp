#include<iostream>
#include<string>
using namespace std;

//this is a middle level maze---TSE Wang Pok
int main()
{
    char bb[21][23] =
    
        {"   ", "  *", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "   "},
        {"   ", "  *", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "  *", "  *", "   ", "  *", "   ", "  *", "  *", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "  *", "   ", "   ", "  !"},
        {"   ", "  *", "   ", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "  *", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "   ", "  *", "   "},
        {"  &", "   ", "   ", "  *", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "   ", "   ", "  *", "   ", "   ", "  *", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "   ", "   ", "  *", "   ", "   ", "   ", "   ", "  *", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "   ", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "  *", "  *", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "  *", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "  *", "   ", "   ", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "   ", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "  *", "   ", "  *", "  *", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   ", "   ", "   ", "  *", "   "},
        {"   ", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "  *", "   ", "  *", "   "},
        {"   ", "  *", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "  *", "   "},
        {"   ", "  *", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "***", "   "}
    };


    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 23; j++)
        {
            cout << bb[i][j];
        }
        cout << endl;
    }

    return 0;
}
