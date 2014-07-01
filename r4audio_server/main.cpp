#include <SFML/Audio.hpp>
#include "playback/playback_module.h"
#include <thread>
#include <chrono>

int main()
{
    sf::Music m;
    if (!m.openFromFile("/home/ram2004/1.flac"))
        return 2;
   // m.play();
   //std::this_thread::sleep_for(std::chrono::seconds(60));
    return 0;
}

