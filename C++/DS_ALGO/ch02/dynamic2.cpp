#include <iostream>

using namespace std;

template <typename T> // 자료형에 따라 할 수 있도록 생성
class DynamicArray
{
    private:
        unsigned int sz;
        int* arr;

    public:
        explicit DynamicArray(int n) : sz(n) {
            /* 복사 생성자의 묵시적 호출을 허용하지 않기 위해 explicit 키워드 삽입.
                복사생성자의 묵시적 호출을 왜 막는가?  --> 자주사용하진 않지만 코드의 명확함을 더하기 위해 막는다.
                복사생성자를 왜 별도로 정의해야 하는가? (디폴트 복사 생성자의 문제점.) --> 멤버변수가 동적 메모리 할당인 경우 복사생성자가 호출되는 시점에서 문제가 발생한다. 


            */

            arr = new T[sz] {}; // 메모리 할당 후 반드시 해제해 주어야함
        }

        ~DynamicArray() { 
            delete [] arr; // 생성자에서 메모리 할당 후 해제.
            cout << "memory deleted" << endl;
         }

        unsigned int size() { return sz; }

        T& operator[] (const int i) { return arr[i]; } // 함수의 반환형에 참조자 선언
        const T& operator[] (const int i) const { return arr[i]; } 
        /*
            const 함수 
            function() const {}; 
            의미 : 이 함수 내에서 멤버변수에 저장된 값을 변경하지 않겠다.
            --> const 선언이 추가된 멤버함수 내에서 멤버변수값을 변경하는 코드가 삽입되면 컴파일에러 발생.
            주의 : const 함수 내에서는 const가 아닌 함수의 호출이 제한된다.
        */
    
};

int main()
{
    DynamicArray<int> da(5); // 지역변수이기 때문에 중괄호를 벗어나면 소멸 --> 소멸하면서 Class 소멸자 실행

    da[0] = 10;
    da[1] = 20;
    da[2] = 30;

    for (int i = 0; i < da.size(); i++)
    {
        cout << da[i] << endl;
    }

}