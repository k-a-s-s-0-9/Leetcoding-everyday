#include <iostream>
#include <algorithm>

bool isPalindrome(int x) {
    if (x < 0) return false;

    std::string s = std::to_string(x);
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());

    return s == rev;
}

int main(){
    int num;
    std::cout << "Enter the number you want to check"<< '\n';
    std::cin >> num;

    bool result = isPalindrome(num); 
    std::cout << "Result " << result;
}