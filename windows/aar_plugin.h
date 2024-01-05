#ifndef FLUTTER_PLUGIN_AAR_PLUGIN_H_
#define FLUTTER_PLUGIN_AAR_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace aar_plugin {

class AarPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  AarPlugin();

  virtual ~AarPlugin();

  // Disallow copy and assign.
  AarPlugin(const AarPlugin&) = delete;
  AarPlugin& operator=(const AarPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace aar_plugin

#endif  // FLUTTER_PLUGIN_AAR_PLUGIN_H_
