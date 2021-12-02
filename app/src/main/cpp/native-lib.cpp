#include <jni.h>
#include <string>
#include <dlib/image_transforms.h>
extern "C" JNIEXPORT jstring  JNICALL
Java_com_example_landmark_1_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}