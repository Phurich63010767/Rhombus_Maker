#include<iostream> 
using namespace std;

void printNTimes(char c, int n)
{
    cout << string(n , c) << endl;
}

int main()
{ 
    int n;
    int x = 1;
    int i = 0;
    int z = 0;
    cout << "Enter number: ";
    cin >> n;
    char c = '*';
    while (x + i < (2*n)-1)
    {
        cout.width(n + z);
        z++;
        cout.fill(' ');
        printNTimes(c, x + i);   
        i = i + 2;
        cout.fill(' ');
    }
    while ((x + i >= (2 * n) - 1)||(x + i >= 1 ))
    {
        cout.width(n + z);
        z--;
        cout.fill(' ');
        printNTimes(c, x + i);
        i = i - 2;
        cout.fill(' ');
    }
    system("pause");
    return 0;
}