#include <iostream>
#include <string>

using namespace std;

std::string uint32_to_ip(uint32_t ip)
{
  unsigned int num1, num2, num3, num4 = 0;
  num1 = (ip >> 24) & 0xFF; //bit shifting and bit masking to isolate desired part of ip address;
  num2 = (ip >> 16) & 0xFF;
  num3 = (ip >> 8) & 0xFF;
  num4 = ip & 0xFF;

  std::string ret = to_string(num1) + "." + to_string(num2) + "." + to_string(num3) + "." + to_string(num4);
  return ret;
}


int main()
{
    uint32_t x = 2149583361;
    cout << uint32_to_ip(x);
}