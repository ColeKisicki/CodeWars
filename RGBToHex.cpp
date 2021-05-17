#include <iostream>

class RGBToHex
{
public:
    static std::string rgb(int r, int g, int b)
    {
        std::string retString;
        if (r > 255 || r < 0 || g > 255 || g < 0 || b > 255 || b < 0) //checks bounds of input parameters
            return retString;

        int intArr[3]{r, g, b};

        for (int i = 0; i < 3; i++)
        {
            int digitNums[2] = {(intArr[i] / 16), (intArr[i] % 16)};

            if (intArr[i] > 255)
            {
                digitNums[0] = 15;
                digitNums[1] = 15;
            }
            else if (intArr[i] < 0)
            {
                digitNums[0] = 0;
                digitNums[1] = 0;
            }

            for (int j = 0; j < 2; j++)
            {
                switch (digitNums[j])
                {
                case 0:
                    retString.append("0");
                    break;
                case 1:
                    retString.append("1");
                    break;
                case 2:
                    retString.append("2");
                    break;
                case 3:
                    retString.append("3");
                    break;
                case 4:
                    retString.append("4");
                    break;
                case 5:
                    retString.append("5");
                    break;
                case 6:
                    retString.append("6");
                    break;
                case 7:
                    retString.append("7");
                    break;
                case 8:
                    retString.append("8");
                    break;
                case 9:
                    retString.append("9");
                    break;
                case 10:
                    retString.append("A");
                    break;
                case 11:
                    retString.append("B");
                    break;
                case 12:
                    retString.append("C");
                    break;
                case 13:
                    retString.append("D");
                    break;
                case 14:
                    retString.append("E");
                    break;
                case 15:
                    retString.append("F");
                    break;
                }
            }
        }
        return retString;
    }
};

int main()
{
    std::cout << RGBToHex::rgb(1, 2, 3) << std::endl;
}