#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int n;

    do {
        std::cout << "Введите число: ";
        std::cin >> n;
        if (n != -1){
            if (vec.size() == 20) {
                for (int i = 0; i < vec.size(); ++i) {
                    if (i < vec.size() - 1)  {
                        vec[i] = vec[i + 1];
                    } else {
                        vec[i] = n;
                    }
                }
            } else {
                vec.push_back(n);
            }
        }
    } while (n != -1);

    for (int i : vec) {
        std::cout << i << " ";
    }

    return 0;
}