#include <iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    int result {0};
    for (int i {0}; i < vec.size() ; ++i){
        for (int j {vec.size()-1} ; j > i ; --j)
            result+=vec.at(i)*vec.at(j);
    }
     
    return result;
}
int main()
{
    vector<int> vec {1,2,3,4};
    int res = calculate_pairs(vec);
    cout << res <<endl;
    return 0;
}