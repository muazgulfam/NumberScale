#include <iostream>

using namespace std;

int main()
{
    int num{};
    do{
        cout << "Enter a number between 1 and 20 ";
        cin >> num;
    }while(num < 1 || num > 20);
    cout << "Thanks! You entered a valid number" << endl;
    return 0;
}
