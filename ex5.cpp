//хеширование
#include <iostream>
#include <set>
#include <string>

int main() {
    std::string str;
    std::set<std::string> set;
    char symbol;
    while (set.size()<1000000){
        std::cin >> symbol;
        std::cin >> str;
        if (symbol == '+'){
            set.insert(str);
        } else if (symbol == '-'){
            set.erase(str);
        } else if (symbol == '?') {
            if (set.find(str) != set.end()) {
                std::cout << "YES" << std::endl;
            } else {
                std::cout << "NO" << std::endl;
            }
        }else if (symbol == '#'){
            return 0;
        }
    }
    return 0;
}
