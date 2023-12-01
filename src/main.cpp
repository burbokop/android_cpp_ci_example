#include <android/log.h>

int main()
{
    __android_log_write(ANDROID_LOG_INFO, "org.burbokop.android_cpp_ci_example", "Hello world");
    return 0;
}
