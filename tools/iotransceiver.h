#include <iostream>

namespace iotransceiver
{
    /**
     * Naive send and receive over the console interface.
     */
     // TODO: Improvements: Add enable_if support for different template parameters
    struct ioGet
    {
        ioGet() = default;
        template <typename T>
        T get()
        {
            T value;
            std::cin >> value;
            return value;
        }
        ~ioGet() = default;
    };

    struct ioSend
    {
        ioSend() = default;
        template <typename T>
        void send(T value)
        {
            std::cout << value;
        }
        ~ioSend() = default;
    };
}