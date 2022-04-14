#include <iostream>

using namespace std;

int main()
{
    int scores[5] = {50,60,70,80,90}; // array 초기화를 하지 않으면 쓰레기값이 들어감.

    int sz = sizeof(scores) / sizeof(int);
    int s = 0;

    for(int i = 0; i < sz; i++)
    {
        // s += scores[i];
        scores[i]++;

        cout << "Mean score : " << scores[i] << endl;
    }

    // float m = (float) s / sz;

    
}