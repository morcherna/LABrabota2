//Дано N чисел, требуется выяснить, сколько среди них различных.
#include <iostream>
#include <set>

int main() {

    //std::cout << "Vvedite kolichestvo chisel: " << std::endl;
    int n = 0;
    std::cin >> n;
    if (n < 1 || n > 100000) {
        exit(0);
    } else {
        int elements = 0;
        std::set<int> seTT;

        //std::cout << "Vvedite chisla: " << std::endl;

        for (int i = 0; i < n; ++i) {
            std::cin >> elements;
            seTT.insert(elements);
        }
        //int result = seTT.size();
        std::cout << seTT.size() << std::endl;

        return 0;
    }
}
