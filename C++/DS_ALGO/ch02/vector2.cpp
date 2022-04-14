#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1 {1,2,3,4};

    cout << vec1.capacity() << ":" << vec1.size() << endl;

    vec1.push_back(5);

    cout << vec1.capacity() << ":" << vec1.size() << endl;

    vec1.push_back(6);
    

    cout << vec1.capacity() << ":" << vec1.size() << endl;

    vec1.insert(vec1.begin(), 0); // insert와 erase는 시간복잡도 O(n)이기 때문에 되도록 사용하지 않는 것이 바람직하다

    cout << vec1.capacity() << ":" << vec1.size() << endl;

    vec1.erase(vec1.begin()+1,vec1.begin()+3);

    cout << vec1.capacity() << ":" << vec1.size() << endl;

    for (int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << ", ";

    }
    cout << endl;

    for (int m : vec1)
    {
        cout << m << endl;
    }
    

    
}