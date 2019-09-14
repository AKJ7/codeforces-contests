//
// Created by hp on 9/14/19.
//

#ifndef CODEFORCES_CONTESTS_DASHA_CODE_H
#define CODEFORCES_CONTESTS_DASHA_CODE_H

#include <algorithm>
#include <stdint.h>

namespace dasha_code
{
    uint8_t dasha(uint8_t n, uint8_t container[])
    {
        uint8_t toReturn = n;
        std::sort(container, container + n);
        uint8_t last = 0;
        for (decltype(n) i = 0; i < n; i++)
        {
            if (last >= container[i])
                continue;
            last = container[i];
            for (decltype(n) j = i + 1; j < n; j++)
            {
                if (container[j] % container[i] == 0)
                {
                    container[j] = container[i];
                    toReturn--;
                }
            }
        }
        return toReturn;
    }
}

//#include <iostream>
//#include <algorithm>
//
//namespace dasha_code
//{
//    uint8_t dasha(uint8_t n, int container[])
//    {
//        uint8_t toReturn = n;
//        std::sort(container, container + n);
//        uint8_t last = 0;
//        for (decltype(n) i = 0; i < n; i++)
//        {
//            if (last >= container[i])
//                continue;
//            last = container[i];
//            for (decltype(n) j = i + 1; j < n; j++)
//            {
//                if (container[j] % container[i] == 0)
//                {
//                    container[j] = container[i];
//                    toReturn--;
//                }
//            }
//        }
//        return toReturn;
//    }
//}
//
//int main() {
//
//    using dasha_code::dasha;
//    int n;
//    std::cin >> n;
//    int buffer[n];
//    for (uint8_t counter = 0; counter < n; counter++)
//    {
//        std::cin >> buffer[counter];
//    }
//
//    std::cout << (int)dasha((uint8_t)n, buffer) << '\n';
//
//    return 0;
//}




#endif //CODEFORCES_CONTESTS_DASHA_CODE_H
