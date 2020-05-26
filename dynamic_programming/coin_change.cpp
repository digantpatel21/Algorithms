#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int coin_change_brute_force_recursive(vector<int> &change, int number) {
    if(number < 0)
        return INT_MAX;

    if(number == 0)
        return 0;

    int sum = INT_MAX;

    for(auto &index : change ) {
        int coinCount = coin_change_brute_force_recursive(change, number-index);

        // if coin count is INT_MAX than we don't need to do anything
        // because adding +1 to it will rollover int range and it will
        // give smallest possible number
        if(coinCount == INT_MAX)
            continue;
        sum = std::min(sum, coinCount+1);
    }

    return sum;
}

int coin_change_brute_force_iterative(vector<int> &change, int number) {
    if(number == 0)
        return 0;

    int sum = INT_MAX;

    while(number >= 0) {
        for(auto &index : change ) {
            int coinCount = coin_change_brute_force_recursive(change, number-index);

            // if coin count is INT_MAX than we don't need to do anything
            // because adding +1 to it will rollover int range and it will
            // give smallest possible number
            if(coinCount == INT_MAX)
                continue;
            sum = std::min(sum, coinCount+1);
        }
    }

    return sum;
}

int main() {
    vector<int> change{1,3,4};
    int number = 10;

    cout<<"Sum is: "<< coin_change_brute_force_recursive(change, number)<<endl;
    return 0;
}