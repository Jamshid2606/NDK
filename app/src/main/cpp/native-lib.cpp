#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_jama_ndk_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
//add
extern "C" JNIEXPORT jint JNICALL
Java_com_jama_ndk_MainActivity_add(
        JNIEnv* env,
        jobject /* this */, jint x, jint y){
    return x+y;
}