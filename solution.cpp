//JC-D. Buttons

#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cin >> A >> B;
    int coin;
    if(A==B)
        coin = A+B;
    else if(max(A,B)==B && min(A,B)==A)
        coin = B*2 - 1;
    else if(max(A,B)==A && min(A,B)==B)
        coin = A*2 -1;
    cout << coin;
    return 0;
}
