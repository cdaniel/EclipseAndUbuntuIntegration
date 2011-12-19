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

import java.io.IOException;

import org.eclipse.swt.widgets.Display;
import org.eclipse.swt.widgets.Shell;

public class TestLauncher {

	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		Display.getDefault();
		Shell shell = new Shell();
		shell.open();
		UnityLauncher launcher = new UnityLauncher();
		
		long id = launcher.unity_launcher_entry_get_for_desktop_id("eclipse.desktop");
		launcher.unity_launcher_entry_set_progress_visible(id, true);
		launcher.unity_launcher_entry_set_progress(id, 0.5);
		
		while (Display.getCurrent().readAndDispatch() && !shell.isDisposed()) {
			Display.getCurrent().sleep();
		}
	}

}
