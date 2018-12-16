/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_dennishucd_VideoEngine */

#ifndef _Included_cn_dennishucd_FFmpegNative
#define _Included_cn_dennishucd_FFmpegNative
#ifdef __cplusplus
extern "C" {
#endif

/* ****************************************
 * FFMPEG For Android 视频编解码
 *
 * Version 3.0
 * 李其柄 版权所有
 * ****************************************/

JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_GetFrame(JNIEnv *, jobject, jstring);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_Open(JNIEnv *, jobject, jstring);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_OpenOut(JNIEnv *, jobject, jstring);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_Close(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_CloseOut(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_GetWidth(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_GetHeight(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_AddFrame(JNIEnv *, jobject, jstring);
JNIEXPORT jdouble JNICALL Java_cn_dennishucd_VideoEngine_GetFrameRate(JNIEnv *, jobject);
JNIEXPORT jdouble JNICALL Java_cn_dennishucd_VideoEngine_GetSampleRate(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_GetDuration(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_HasAudio(JNIEnv *, jobject);
/*
JNIEXPORT jint JNICALL Java_cn_dennishucd_VideoEngine_OpenOutputVideo
  (JNIEnv *, jobject, jstring);

JNIEXPORT jstring JNICALL Java_cn_dennishucd_VideoEngine_CloseNewVideo
  (JNIEnv *, jobject);

JNIEXPORT jstring JNICALL Java_cn_dennishucd_VideoEngine_AddFrame
  (JNIEnv *, jobject, jstring);
*/
#ifdef __cplusplus
}
#endif
#endif
