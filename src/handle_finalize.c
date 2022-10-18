#include "staderlabs_plugin.h"

void handle_finalize(void *parameters) {
    ethPluginFinalize_t *msg = (ethPluginFinalize_t *) parameters;
    context_t *context = (context_t *) msg->pluginContext;

    msg->uiType = ETH_UI_TYPE_GENERIC;
    msg->numScreens = 0;  // Claim screen doesn't have any data to show
    if (context->ticker) msg->numScreens = 1;
    msg->result = ETH_PLUGIN_RESULT_OK;
}
