#include <cn_markmjw_ndkdemo_util_MathUtil.h>

JNIEXPORT jint JNICALL Java_cn_markmjw_ndkdemo_util_MathUtil_square
  (JNIEnv *env, jclass cls, jint num)
  {
        return num*num;
  }