#ifndef SETTINGS_HXX_
#define SETTINGS_HXX_

#include <string>

class Settings
{
public:
  /// Retrieves instance of Singleton class Settings
  static Settings &instance()
  {
    static Settings settings;
    return settings;
  }

  Settings();
  ~Settings() = default;

  void readFile();
  void writeFile();

  typedef struct
  {
    int mapSize;
    int screenWidth;
    int screenHeight;
    int maxElevationHeight;
    bool vSync;
    bool fullScreen;
    int fullScreenMode;
    int musicVolume;
    int soundEffectsVolume;
    bool playMusic;
    bool playSoundEffects;
    int audioChannels;
    std::string buildMenuPosition; // TODO: Replace by enum when BetterEnums is implemented
    std::string uiDataJSONFile;
    std::string tileDataJSONFile;
    std::string uiLayoutJSONFile;
  } SettingsStruct;

  SettingsStruct settings;
};

#endif