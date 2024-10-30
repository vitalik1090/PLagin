//
// Created by palundra 228 on 30.10.24.
//


#include "plugin_interface.h"
#include <iostream>

double add(double a, double b) {
    return a + b;
}

extern "C" Plugin* create_plugin() {
    static Plugin plugin = {
        "My Simple Plugin",
        add
    };
    return &plugin; // Возвращаем указатель на наш плагин
}

extern "C" void destroy_plugin(Plugin* plugin) {
    // Здесь обычно освобождаются ресурсы, если это необходимо
}
