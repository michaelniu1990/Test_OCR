#include <jni.h>
#include <string>
#include "Test_OCR.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_test_1ocr_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    Test_OCR testOcr;
    testOcr.process();
    return env->NewStringUTF(hello.c_str());
}