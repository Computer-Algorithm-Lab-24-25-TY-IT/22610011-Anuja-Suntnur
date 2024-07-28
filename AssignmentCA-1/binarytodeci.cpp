#include <iostream>
#include <vector>
using namespace std;

int main() {
    int decinum=11;
    vector<int> v;

    if (decinum == 0) {
        v.push_back(0);
    } else {
        int n = decinum;
        while (n > 0) {
            v.push_back(n % 2);
            n = n / 2;
        }
    }

    cout << "Binary representation of " <<decinum<< " is: ";
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
    }
    cout<<endl;

    return 0;
}

