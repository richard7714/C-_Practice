/**
 * 바이러스가 숙주의 몸속에서 1초당 P배씩 증가한다.
 *
 * 처음에 바이러스 K마리가 있었다면, N초 후에는 총 몇 마리의 바이러스로 불어날까?
 * N초 동안 죽는 바이러스는 없다고 가정
 */


//#define VIRUS
#ifndef VIRUS

#include <iostream>

using namespace std;

int main()
{
    // 숫자가 기하급수적으로 증가 => 자료형이 표현할 수 있는 범위를 벗어날 가능성 존재
    // 자료형을 long long으로 이용 + 나머지 연산을 마지막 it만 하는게 아닌 iteration마다 진행하여 값이 너무 커지는 것을 방지
    long long K, P, N;
    cin >> K >> P >> N;

    long long mod = 1000000007;

    while(N)
    {
        K = (K * P) % mod;
        N--;
    }

    cout << K;
}



#endif
