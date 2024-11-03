#include <emscripten.h>

// Определяем JavaScript функцию alert внутри C++ кода с помощью макроса EM_JS
EM_JS(void, show_alert, (), {
    alert("Hello, World!");
});

extern "C" {
    // Экспортируем функцию для вызова из JavaScript
    EMSCRIPTEN_KEEPALIVE void showHelloWorld() {
        show_alert();  // Вызываем функцию alert
    }
}
