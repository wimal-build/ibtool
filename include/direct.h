#include <unistd.h>
#include <sys/stat.h>

inline static int _mkdir(const char *dirname) {
    return mkdir(dirname, 0777);
}

inline static void strcpy_s(char *dest, size_t destsz, const char *src) {
    for (int i = 0; i < destsz && (i == 0 || src[i - 1]); ++i) {
        dest[i] = src[i];
    }
}
