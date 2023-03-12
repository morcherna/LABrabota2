//В каждой строке сначала записан номер класса (число, равное 9, 10 или 11), затем (через пробел) – фамилия ученика.
// Общее число строк в файле не превосходит 100000. Длина каждой фамилии не превосходит 50 символов.
#include <iostream>
#include <map>
#include <string>
#include <iomanip>

int main() {

    std::multimap<int, std::string> m;
    std::multimap<int, std::string>::iterator it;

    int klass;
    std::string familia;

    while (std::cin >> klass>>familia)
        m.insert(std::pair<int, std::string>(klass, familia));

    for (it = m.begin(); it != m.end(); ++it)
        std::cout << it->first <<" "<< it->second << std::endl;

    return 0;
}
