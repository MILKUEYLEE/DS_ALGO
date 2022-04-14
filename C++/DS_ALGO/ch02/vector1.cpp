#include <iostream>
#include <vector> //vector 헤더 

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10); // v[0]~ v2[9] , 0으로 초기화, 동적배열로 선언 및 초기화
    vector<int> v3(10,1); //모든 element가 1로 초기화

    vector<int> v4 {10,20,30,40,50};
    
    // vector<int> v4 = {10,20,30,40,50}; 동일


    vector<int> v5 = v4; // 깊은복사 형태로 복사 
    // vector<int> v5(v4); 동일

    vector<int> v6(v4.begin(), v4.begin()+3); // v4[0] ~ v4[0]+3 앞까지 즉, {10,20,30}

    // for (int i = 0; i < v6.size(); i++)
    // {
    //     cout << v6[i] << endl;
    // }
    vector<int>::iterator it ;
    vector<int>::iterator it2 = v6.begin();

    // at 연산자 : 비효율적 

    //iterator

    vector<int> test {10,20,30,40,50,60};

    test.push_back(0);

    for(it = test.begin(); it != test.end(); it ++)
        {
        
            // it++;
            // v6.push_back(0);

            cout << *it << " " << endl; 
        }

    

    
    // cout << &it << " "<< endl;

    v6.insert(it2,6);



    // cout <<  << " "<< endl;


    vector<vector<int>> mat1(2, vector<int>(3)); // 0으로 초기화된 2행 3열

    vector<vector<int>> mat1_1(2, vector<int>(3,1)); // 1로 초기화된 2행 3열

    vector<vector<int>> mat2 { 
        {1, 2, 3}, 
        {4, 5, 6} 
    };
/*
    for (int r = 0; r < 2; r++){
        for (int c = 0; c < 3; c++) {
            cout << mat2[r][c] << "s, ";
            
        }

        cout<<endl;
    }
*/

    for (int r = 0; r < mat2.size(); r++){
        for (int c = 0; c < mat2[r].size(); c++) {
            cout << mat2[r][c] << ", ";
            
        }

        cout<<endl;
    }


/*
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    // v[0], v1[1], v[2]
*/

 }