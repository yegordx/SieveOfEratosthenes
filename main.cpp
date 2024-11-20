#include <vector>
#include <cmath>

void sieveOfEratosthenes(int limit) { 
    std::vector<bool> isPrime(limit + 1, true); 
    isPrime[0] = isPrime[1] = false; 
 
     for (int num = 2; num <= sqrt(limit); ++num) { 
         if (isPrime[num]) { 
             for (int multiple = num * num; multiple <= limit; multiple += num) { 
                 isPrime[multiple] = false; 
             } 
         } 
     } 
}

int main(){
    int limit = 10000000;
    sieveOfEratosthenes(limit);
    return 0;
}