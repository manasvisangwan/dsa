class Solution {
public:
    int getSum(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = getSum(n);
        int fast = getSum(getSum(n));

        while (slow != fast) {
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        }

        return slow == 1;
    }
};