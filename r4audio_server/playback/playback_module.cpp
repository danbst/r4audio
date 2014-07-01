#include "playback_module.h"

bool playback_module::play(const std::string &path) {
    if (!player_.openFromFile(path))
        return false;
    player_.play();
    return true;
}

void playback_module::stop() {
    player_.stop();
}

void playback_module::pause() {
    player_.pause();
}

//void playback_module::set_playing_offset(float offset) {
//    player_.setPlayingOffset(offset);
//}

void playback_module::set_volume(float volume) {
    player_.setVolume(volume);
}
