#include <iostream>

using namespace std;

int main()
{
    int * ptr = new int[3] {}; // {}안쓰면 ptr 배열에는 쓰레기값이 들어감
    ptr[0] = 10;
    ptr[2] = 20;

    for (int i = 0; i < 3; i++)
        cout << ptr[i] << endl;

    delete [] ptr;

    ptr = nullptr; // ptr 초기화
}