/*
 * org_eclipse_ubuntuUnityLauncher.c
 *
 *  Created on: Dec 5, 2011
 *      Author: kdaniel
 */
#include "org_eclipse_ubuntu_UnityLauncher.h"

/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_get_for_desktop_id
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1get_1for_1desktop_1id
  (JNIEnv * env, jobject obj, jstring string){
	return 0;
}

/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_set_progress_visible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1set_1progress_1visible
  (JNIEnv * env, jobject obj, jlong pointer, jboolean show){
	return;
}

/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_set_progress
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1set_1progress
  (JNIEnv * env, jobject obj, jlong pointer, jdouble progress){
	return;
}



