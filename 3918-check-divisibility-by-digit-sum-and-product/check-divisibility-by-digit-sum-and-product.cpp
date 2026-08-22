class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n;
        int sum = 0;
        int mul = 1;

        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            mul *= digit;
            n = n / 10;
        }
        int total=sum+mul;
        return (a % total == 0 );
    }
};