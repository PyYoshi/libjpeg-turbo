/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_libjpegturbo_turbojpeg_TJ */

#ifndef _Included_org_libjpegturbo_turbojpeg_TJ
#define _Included_org_libjpegturbo_turbojpeg_TJ
#ifdef __cplusplus
extern "C" {
#endif
#undef org_libjpegturbo_turbojpeg_TJ_NUMSUBOPT
#define org_libjpegturbo_turbojpeg_TJ_NUMSUBOPT 4L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP444
#define org_libjpegturbo_turbojpeg_TJ_SAMP444 0L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP422
#define org_libjpegturbo_turbojpeg_TJ_SAMP422 1L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP420
#define org_libjpegturbo_turbojpeg_TJ_SAMP420 2L
#undef org_libjpegturbo_turbojpeg_TJ_GRAYSCALE
#define org_libjpegturbo_turbojpeg_TJ_GRAYSCALE 3L
#undef org_libjpegturbo_turbojpeg_TJ_NUMPIXFORMATS
#define org_libjpegturbo_turbojpeg_TJ_NUMPIXFORMATS 7L
#undef org_libjpegturbo_turbojpeg_TJ_RGB
#define org_libjpegturbo_turbojpeg_TJ_RGB 0L
#undef org_libjpegturbo_turbojpeg_TJ_BGR
#define org_libjpegturbo_turbojpeg_TJ_BGR 1L
#undef org_libjpegturbo_turbojpeg_TJ_RGBX
#define org_libjpegturbo_turbojpeg_TJ_RGBX 2L
#undef org_libjpegturbo_turbojpeg_TJ_BGRX
#define org_libjpegturbo_turbojpeg_TJ_BGRX 3L
#undef org_libjpegturbo_turbojpeg_TJ_XBGR
#define org_libjpegturbo_turbojpeg_TJ_XBGR 4L
#undef org_libjpegturbo_turbojpeg_TJ_XRGB
#define org_libjpegturbo_turbojpeg_TJ_XRGB 5L
#undef org_libjpegturbo_turbojpeg_TJ_YUV
#define org_libjpegturbo_turbojpeg_TJ_YUV 6L
#undef org_libjpegturbo_turbojpeg_TJ_BOTTOMUP
#define org_libjpegturbo_turbojpeg_TJ_BOTTOMUP 2L
#undef org_libjpegturbo_turbojpeg_TJ_FORCEMMX
#define org_libjpegturbo_turbojpeg_TJ_FORCEMMX 8L
#undef org_libjpegturbo_turbojpeg_TJ_FORCESSE
#define org_libjpegturbo_turbojpeg_TJ_FORCESSE 16L
#undef org_libjpegturbo_turbojpeg_TJ_FORCESSE2
#define org_libjpegturbo_turbojpeg_TJ_FORCESSE2 32L
#undef org_libjpegturbo_turbojpeg_TJ_FORCESSE3
#define org_libjpegturbo_turbojpeg_TJ_FORCESSE3 128L
#undef org_libjpegturbo_turbojpeg_TJ_FASTUPSAMPLE
#define org_libjpegturbo_turbojpeg_TJ_FASTUPSAMPLE 256L
#undef org_libjpegturbo_turbojpeg_TJ_TJ_BGR
#define org_libjpegturbo_turbojpeg_TJ_TJ_BGR 1L
#undef org_libjpegturbo_turbojpeg_TJ_TJ_ALPHAFIRST
#define org_libjpegturbo_turbojpeg_TJ_TJ_ALPHAFIRST 64L
#undef org_libjpegturbo_turbojpeg_TJ_TJ_YUV
#define org_libjpegturbo_turbojpeg_TJ_TJ_YUV 512L
/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    bufSize
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_libjpegturbo_turbojpeg_TJ_bufSize
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    bufSizeYUV
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_org_libjpegturbo_turbojpeg_TJ_bufSizeYUV
  (JNIEnv *, jclass, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
