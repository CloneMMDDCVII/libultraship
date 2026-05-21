#pragma once

#include "controller/controldevice/controller/mapping/ControllerGyroMapping.h"
#include <memory>
#include <string>

namespace Ship {
class GyroMappingFactory {
  public:
    static std::shared_ptr<ControllerGyroMapping> CreateGyroMappingFromConfig(uint8_t portIndex, std::string id);
    static std::shared_ptr<ControllerGyroMapping> CreateGyroMappingFromSDLInput(uint8_t portIndex);
#ifdef __ANDROID__
    static bool HasAndroidDeviceGyro();
    static std::shared_ptr<ControllerGyroMapping> CreateAndroidDeviceGyroMapping(uint8_t portIndex);
#endif
};
} // namespace Ship
