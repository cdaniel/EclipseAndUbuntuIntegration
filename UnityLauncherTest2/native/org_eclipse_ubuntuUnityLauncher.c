/*
 * Copyright (c) 2011 Krzysztof Daniel.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *  Krzysztof Daniel - initial API and implementation
 */

#include "org_eclipse_ubuntu_UnityLauncher.h"


/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_get_for_desktop_id
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1get_1for_1desktop_1id
  (JNIEnv * env, jobject obj, jstring desktopId){
	const char *nativeDesktopId = (*env)->GetStringUTFChars(env, desktopId, 0);
	long pointer = (long) unity_launcher_entry_get_for_desktop_id(nativeDesktopId);
	(*env)->ReleaseStringUTFChars(env, desktopId, nativeDesktopId);
	return pointer;
}

/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_set_progress_visible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1set_1progress_1visible
  (JNIEnv * env, jobject obj, jlong pointer, jboolean show){
	unity_launcher_entry_set_progress_visible((UnityLauncherEntry*)pointer, show);
	return;
}

/*
 * Class:     org_eclipse_ubuntu_UnityLauncher
 * Method:    unity_launcher_entry_set_progress
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_eclipse_ubuntu_UnityLauncher_unity_1launcher_1entry_1set_1progress
  (JNIEnv * env, jobject obj, jlong pointer, jdouble progress){
	unity_launcher_entry_set_progress((UnityLauncherEntry*)pointer, progress);
	return;
}



