#include <jni.h>
#include "react-native-awesome-module.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_awesomemodule_AwesomeModuleModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return awesomemodule::multiply(a, b);
}
