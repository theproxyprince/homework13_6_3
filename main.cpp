#include <iostream>
#include <vector>
int main() {

    std::vector<int> vec;
    int count = 0;
    int input;
    std::cin >> input;
    while (input != -1) {
        count++;
        if (count > 20) {
            vec.erase(vec.begin());
            vec.push_back(input);
        } else {
            vec.push_back(input);
        }
        std::cin >> input;
    }

    for (int i : vec) {
        std::cout << i << " ";
    }

}
