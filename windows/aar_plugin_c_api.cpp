#include "include/aar_plugin/aar_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "aar_plugin.h"

void AarPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  aar_plugin::AarPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
