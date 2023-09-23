#include <iostream>

#define DAY_NAME(num) \
(num==1 ? "MONDAY" :    \
(num==2 ? "TUESDAY" :   \
(num==3 ? "WEDNESDAY" : \
(num==4 ? "THURSDAY" :  \
(num==5 ? "FRIDAY" :    \
(num==6 ? "SATURDAY" :  \
(num==7? "SUNDAY" : "ERR"))))))

int main() {
    std::cout << "Enter the number of the day of the week (1-7): ";
    int num;
    std::cin>>num;

    std::cout<<DAY_NAME(num));
}
