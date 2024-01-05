//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <aar_plugin/aar_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) aar_plugin_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "AarPlugin");
  aar_plugin_register_with_registrar(aar_plugin_registrar);
}
