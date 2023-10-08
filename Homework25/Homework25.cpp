#include <iostream>
using namespace std;
//void s()
//{
//    char line[100]{".,.,.,.,.,.,."};
//
//    for (int i = 0; i < 100; i++)
//    {
//        if (line[i] == '.') {
//            line[i] = '!';
//        }
//    }
//    cout << line;
//}
//int main()
//{
//    s();
//}

void s()
{
    char line[100]{ ".,.,.,.,.,.,." };
    int l = 0;
    for (int i = 0; i < 100; i++)
    {
        if (line[i] == '.') {
            l++;
        }
    }
    cout << l;
}
int main()
{
    s();
}