#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_comhelloworld_example_ashwingoyal_myapplication_myQuizapp_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
