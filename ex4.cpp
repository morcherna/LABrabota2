//скобки
#include <iostream>
#include <stack>



int main() {
    std::stack <char> stack;
    std::string str;
    char element;
    std::cin >> str;
    if (str.size()>100000){
        exit(0);
    }
    for (unsigned int i =0; i<str.size();i++){//unsigned потому что компилятор на тестах ругался
        element = str[i];
        if ((str.find('[')== std::string::npos || str.find(']')== std::string::npos) && (str.find('{')== std::string::npos||str.find('}')== std::string::npos) && (str.find('(')== std::string::npos||str.find(')')== std::string::npos)){
            std::cout << "no" << std::endl;
            exit(0);}
        if (element == '(' ||  element == '{' || element == '[') {
            if (str.find(')') == std::string::npos && str.find('}') == std::string::npos && str.find(']') == std::string::npos){
                std::cout << "no" << std::endl;
                exit(0);}
            else
                stack.push(element);
        }else if (element == ']' && !stack.empty()) {
//            if (str.find('[') == std::string::npos){
//                std::cout << "no" << std::endl;
//                exit(0);}else
             if (stack.top() == '[') {
                stack.pop();
            } else{
                std::cout << "no" << std::endl;
                exit(0);}
        } else if (element == ')'&& !stack.empty()) {
//            if (str.find('(') == std::string::npos){
//                std::cout << "no" << std::endl;
//                exit(0);}else
              if (stack.top() == '(') {
                stack.pop();
            } else{
                std::cout << "no" << std::endl;
                exit(0);}
        } else if (element == '}'&& !stack.empty()) {
//            if (str.find('{') == std::string::npos){
//                std::cout << "no" << std::endl;
//                exit(0);}
            if (stack.top() == '{') {
                stack.pop();
            }else{
                std::cout << "no" << std::endl;
                exit(0);}
        } else{
            std::cout << "no" << std::endl;
            exit(0);}
    }
    if (stack.empty()&&(str.find(']')!= std::string::npos||str.find('[')!= std::string::npos||str.find('{')!= std::string::npos||str.find('}')!= std::string::npos||str.find('(')!= std::string::npos||str.find(')')!= std::string::npos)){
        std::cout << "yes" << std::endl;
    }else
        std::cout << "no" << std::endl;


    return 0;
}
