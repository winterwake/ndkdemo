//
// Created by wake on 16-11-21.
//
#include <jni.h>
#include <string>
#include <android/log.h>

#define LOG_TAG "wakenativeJNI"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO , LOG_TAG , __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

extern "C" {
    jstring Java_com_example_wake_wakendkdemo_MainActivity_wakeJNI(JNIEnv *env, jobject clazz) {
        LOGI("native-wake success");
        return env->NewStringUTF("native_wake");
    }
}