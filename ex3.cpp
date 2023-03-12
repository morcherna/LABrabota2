//пьяница
#include <iostream>
#include <deque>

void vvodKart(std::deque<int>&dq){
    int number = 0;
    for (int i = 0; i < 5; ++i){
        std::cin >> number;
        dq.push_back(number);
    }
}
int main() {
    std::deque<int> dq1;
    std::deque<int> dq2;

    vvodKart(dq1);
    vvodKart(dq2);

    int kolichestvoHodov = 0;
    while (!dq1.empty() && !dq2.empty() && kolichestvoHodov<1000000) {
        int temp1 = dq1.front();
        int temp2 = dq2.front();
        dq1.pop_front();
        dq2.pop_front();
        if (temp1 >temp2 ) {
            if (temp1 == 9 && temp2 == 0){
                dq2.push_back(temp1);
                dq2.push_back(temp2);
            }else{
                dq1.push_back(temp1);
                dq1.push_back(temp2);}
        }
        else if (temp1 < temp2) {
            if (temp1 == 0 && temp2 == 9){
                dq1.push_back(temp1);
                dq1.push_back(temp2);
            }else{
                dq2.push_back(temp1);
                dq2.push_back(temp2);
            }
        }

        kolichestvoHodov++;
    }
    if (kolichestvoHodov > 1000000) {
        std::cout << "botva" << std::endl;
    } else if (dq1.empty()) {
        std::cout << "second " << kolichestvoHodov << std::endl;
    } else if (dq2.empty()) {
        std::cout << "first " << kolichestvoHodov << std::endl;
    }

    return 0;
}

