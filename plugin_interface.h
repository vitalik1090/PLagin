
#ifndef PLUGIN_INTERFACE_H
#define PLUGIN_INTERFACE_H

extern "C" {
    // Определяем интерфейс для плагина
    typedef struct {
        const char* name;
        double (*add)(double, double);
    } Plugin;

    Plugin* create_plugin();
    void destroy_plugin(Plugin* plugin);
}

#endif // PLUGIN_INTERFACE_H
