package org.eclipse.ubuntu;


public class UnityLauncher {
	
	public native long unity_launcher_entry_get_for_desktop_id (String id);
	
	public native void unity_launcher_entry_set_progress_visible (long self, boolean visible);
	
	public native void unity_launcher_entry_set_progress (long self, double progress);
}
