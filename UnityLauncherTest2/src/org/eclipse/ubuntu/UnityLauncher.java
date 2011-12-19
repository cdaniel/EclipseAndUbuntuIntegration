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

package org.eclipse.ubuntu;


public class UnityLauncher {
	{
		System.loadLibrary("UnityLauncherTest2");
	}
	
	public native long unity_launcher_entry_get_for_desktop_id (String id);
	
	public native void unity_launcher_entry_set_progress_visible (long self, boolean visible);
	
	public native void unity_launcher_entry_set_progress (long self, double progress);
}
