#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for(int i=0;i<10;i++){
        while(count<=i){
            cout << "(^_^)";
            count++;
        }
        cout << endl;
        count = 0;
    }
    return 0;
}
