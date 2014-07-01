#ifndef PLAYBACK_MODULE_H
#define PLAYBACK_MODULE_H

#include <string>
#include <SFML/Audio.hpp>

class playback_module
{
public:
    bool play(const std::string& path);
    void stop();
    void pause();
   // void set_playing_offset(float offset);
    void set_volume(float volume);

private:
    sf::Music player_;

};

#endif // PLAYBACK_MODULE_H
