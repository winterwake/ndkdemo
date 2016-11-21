#include <jni.h>
#include <string>
//#include <utils/Log.h>
#include <android/log.h>

#define LOG_TAG "wakeJNI"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO , LOG_TAG , __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)


extern "C" {
    jstring Java_com_example_wake_wakendkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject clazz) {
        LOGI("native-lib success");
        return env->NewStringUTF("native-lib");
    }

    jstring Java_com_example_wake_wakendkdemo_MainActivity_testJNI(JNIEnv *env, jobject clazz) {
        LOGI("native-lib success");
        return env->NewStringUTF("native-lib");
    }

}