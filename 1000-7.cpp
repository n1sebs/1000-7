#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void sleep (int ms) {
  std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
int main () {
  cout << "Я гуль";
  cin.get();
  int from = 1000;
  while(from>0) {
    cout << from << " - 7 = " << from - 7 << "\n";
    from -= 7;
    sleep(300);
  }
  return 0;
}