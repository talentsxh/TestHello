#include <jni.h>
#include <string>
#include "include/Hello.h"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_fanghonghui_testhello_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_fanghonghui_testhello_MainActivity_adds(JNIEnv *env, jobject instance) {

    // TODO
    Hello hello;
    return hello.calculate(8,9);
}