/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_eclipse_ubuntu_UnityLauncher */

#ifndef _Included_org_eclipse_ubuntu_UnityLauncher
#define _Included_org_eclipse_ubuntu_UnityLauncher
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_get_for_desktop_id
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1get_1for_1desktop_1id
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_set_progress_visible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1set_1progress_1visible
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_set_progress
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1set_1progress
  (JNIEnv *, jobject, jlong, jdouble);

#ifdef __cplusplus
}
#endif
#endif