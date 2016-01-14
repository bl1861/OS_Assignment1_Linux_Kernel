Welcome to StackEdit!
======================


Hey! I'm your first Markdown document in **StackEdit**[^stackedit]. Don't delete me, I'm very helpful! I can be recovered anyway in the **Utils** tab of the <i class="icon-cog"></i> **Settings** dialog.

----------


Documents
-------------

StackEdit stores your __documents__ in your browser, which means all your documents are automatically saved locally and are accessible **offline!**

> **Note:**

> - StackEdit is accessible offline after the application has been loaded for the first time.
> - Your local documents are not shared between different browsers or computers.
> - Clearing your browser's data may **delete all your local documents!** Make sure your documents are synchronized with **Google Drive** or **Dropbox** (check out the [<i class="icon-refresh"></i> Synchronization](#synchronization) section).

#### <i class="icon-file"></i> Create a document

The document panel is accessible using the <i class="icon-folder-open"></i> button in the navigation bar. You can create a new document by clicking <i class="icon-file"></i> **New document** in the document panel.

#### <i class="icon-folder-open"></i> Switch to another document

All your local documents are listed in the document panel. You can switch from one to another by clicking a document in the list or you can toggle documents using <kbd>Ctrl+[</kbd> and <kbd>Ctrl+]</kbd>.

#### <i class="icon-pencil"></i> Rename a document

You can rename the current document by clicking the document title in the navigation bar.

#### <i class="icon-trash"></i> Delete a document

You can delete the current document by clicking <i class="icon-trash"></i> **Delete document** in the document panel.

#### <i class="icon-hdd"></i> Export a document

You can save the current document to a file by clicking <i class="icon-hdd"></i> **Export to disk** from the <i class="icon-provider-stackedit"></i> menu panel.

> **Tip:** Check out the [<i class="icon-upload"></i> Publish a document](#publish-a-document) section for a description of the different output formats.


----------


Synchronization
-------------------

StackEdit can be combined with <i class="icon-provider-gdrive"></i> **Google Drive** and <i class="icon-provider-dropbox"></i> **Dropbox** to have your documents saved in the *Cloud*. The synchronization mechanism takes care of uploading your modifications or downloading the latest version of your documents.

> **Note:**

> - Full access to **Google Drive** or **Dropbox** is required to be able to import any document in StackEdit. Permission restrictions can be configured in the settings.
> - Imported documents are downloaded in your browser and are not transmitted to a server.
> - If you experience problems saving your documents on Google Drive, check and optionally disable browser extensions, such as Disconnect.

#### <i class="icon-refresh"></i> Open a document

You can open a document from <i class="icon-provider-gdrive"></i> **Google Drive** or the <i class="icon-provider-dropbox"></i> **Dropbox** by opening the <i class="icon-refresh"></i> **Synchronize** sub-menu and by clicking **Open from...**. Once opened, any modification in your document will be automatically synchronized with the file in your **Google Drive** / **Dropbox** account.

#### <i class="icon-refresh"></i> Save a document

You can save any document by opening the <i class="icon-refresh"></i> **Synchronize** sub-menu and by clicking **Save on...**. Even if your document is already synchronized with **Google Drive** or **Dropbox**, you can export it to a another location. StackEdit can synchronize one document with multiple locations and accounts.

#### <i class="icon-refresh"></i> Synchronize a document

Once your document is linked to a <i class="icon-provider-gdrive"></i> **Google Drive** or a <i class="icon-provider-dropbox"></i> **Dropbox** file, StackEdit will periodically (every 3 minutes) synchronize it by downloading/uploading any modification. A merge will be performed if necessary and conflicts will be detected.

If you just have modified your document and you want to force the synchronization, click the <i class="icon-refresh"></i> button in the navigation bar.

> **Note:** The <i class="icon-refresh"></i> button is disabled when you have no document to synchronize.

#### <i class="icon-refresh"></i> Manage document synchronization

Since one document can be synchronized with multiple locations, you can list and manage synchronized locations by clicking <i class="icon-refresh"></i> **Manage synchronization** in the <i class="icon-refresh"></i> **Synchronize** sub-menu. This will let you remove synchronization locations that are associated to your document.

> **Note:** If you delete the file from **Google Drive** or from **Dropbox**, the document will no longer be synchronized with that location.

----------


Publication
-------------

Once you are happy with your document, you can publish it on different websites directly from StackEdit. As for now, StackEdit can publish on **Blogger**, **Dropbox**, **Gist**, **GitHub**, **Google Drive**, **Tumblr**, **WordPress** and on any SSH server.

#### <i class="icon-upload"></i> Publish a document

You can publish your document by opening the <i class="icon-upload"></i> **Publish** sub-menu and by choosing a website. In the dialog box, you can choose the publication format:

- Markdown, to publish the Markdown text on a website that can interpret it (**GitHub** for instance),
- HTML, to publish the document converted into HTML (on a blog for example),
- Template, to have a full control of the output.

> **Note:** The default template is a simple webpage wrapping your document in HTML format. You can customize it in the **Advanced** tab of the <i class="icon-cog"></i> **Settings** dialog.

#### <i class="icon-upload"></i> Update a publication

After publishing, StackEdit will keep your document linked to that publication which makes it easy for you to update it. Once you have modified your document and you want to update your publication, click on the <i class="icon-upload"></i> button in the navigation bar.

> **Note:** The <i class="icon-upload"></i> button is disabled when your document has not been published yet.

#### <i class="icon-upload"></i> Manage document publication

Since one document can be published on multiple locations, you can list and manage publish locations by clicking <i class="icon-upload"></i> **Manage publication** in the <i class="icon-provider-stackedit"></i> menu panel. This will let you remove publication locations that are associated to your document.

> **Note:** If the file has been removed from the website or the blog, the document will no longer be published on that location.

----------


Markdown Extra
--------------------

StackEdit supports **Markdown Extra**, which extends **Markdown** syntax with some nice features.

> **Tip:** You can disable any **Markdown Extra** feature in the **Extensions** tab of the <i class="icon-cog"></i> **Settings** dialog.

> **Note:** You can find more information about **Markdown** syntax [here][2] and **Markdown Extra** extension [here][3].


### Tables

**Markdown Extra** has a special syntax for tables:

Item     | Value
-------- | ---
Computer | $1600
Phone    | $12
Pipe     | $1

You can specify column alignment with one or two colons:

| Item     | Value | Qty   |
| :------- | ----: | :---: |
| Computer | $1600 |  5    |
| Phone    | $12   |  12   |
| Pipe     | $1    |  234  |


### Definition Lists

**Markdown Extra** has a special syntax for definition lists too:

Term 1
Term 2
:   Definition A
:   Definition B

Term 3

:   Definition C

:   Definition D

	> part of definition D


### Fenced code blocks

GitHub's fenced code blocks are also supported with **Highlight.js** syntax highlighting:

```
// Foo
var bar = 0;
```

> **Tip:** To use **Prettify** instead of **Highlight.js**, just configure the **Markdown Extra** extension in the <i class="icon-cog"></i> **Settings** dialog.

> **Note:** You can find more information:

> - about **Prettify** syntax highlighting [here][5],
> - about **Highlight.js** syntax highlighting [here][6].


### Footnotes

You can create footnotes like this[^footnote].

  [^footnote]: Here is the *text* of the **footnote**.


### SmartyPants

SmartyPants converts ASCII punctuation characters into "smart" typographic punctuation HTML entities. For example:

|                  | ASCII                        | HTML              |
----------------- | ---------------------------- | ------------------
| Single backticks | `'Isn't this fun?'`            | 'Isn't this fun?' |
| Quotes           | `"Isn't this fun?"`            | "Isn't this fun?" |
| Dashes           | `-- is en-dash, --- is em-dash` | -- is en-dash, --- is em-dash |


### Table of contents

You can insert a table of contents using the marker `[TOC]`:

[TOC]


### MathJax

You can render *LaTeX* mathematical expressions using **MathJax**, as on [math.stackexchange.com][1]:

The *Gamma function* satisfying $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$ is via the Euler integral

$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$

> **Tip:** To make sure mathematical expressions are rendered properly on your website, include **MathJax** into your template:

```
<script type="text/javascript" src="https://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS_HTML"></script>
```

> **Note:** You can find more information about **LaTeX** mathematical expressions [here][4].


### UML diagrams

You can also render sequence diagrams like this:

```sequence
Alice->Bob: Hello Bob, how are you?
Note right of Bob: Bob thinks
Bob-->Alice: I am good thanks!
```

And flow charts like this:

```flow
st=>start: Start
e=>end
op=>operation: My Operation
cond=>condition: Yes or No?

st->op->cond
cond(yes)->e
cond(no)->op
```

> **Note:** You can find more information:

> - about **Sequence diagrams** syntax [here][7],
> - about **Flow charts** syntax [here][8].

### Support StackEdit

[![](https://cdn.monetizejs.com/resources/button-32.png)](https://monetizejs.com/authorize?client_id=ESTHdCYOi18iLhhO&summary=true)

  [^stackedit]: [StackEdit](https://stackedit.io/) is a full-featured, open-source Markdown editor based on PageDown, the Markdown library used by Stack Overflow and the other Stack Exchange sites.


  [1]: http://math.stackexchange.com/
  [2]: http://daringfireball.net/projects/markdown/syntax "Markdown"
  [3]: https://github.com/jmcmanus/pagedown-extra "Pagedown Extra"
  [4]: http://meta.math.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference
  [5]: https://code.google.com/p/google-code-prettify/
  [6]: http://highlightjs.org/
  [7]: http://bramp.github.io/js-sequence-diagrams/
  [8]: http://adrai.github.io/flowchart.js/





OS_Assignment1_Linux_Kernel
=============================
	
The main purpose of this assignment is to familiarize you with linux kernel and system calls. In particular, you will add a new system call and hook existing system calls in linux kernel. Note that the below instruction works for Ubuntu 11.04 and Linux Kernel 2.6.39. If you work on other Linux distribution or kernel version, the steps might change. For example, in Linux kernel version 3.x, you need to modify the file ```syscall_32.tbl``` instead of ```syscall_table_32.S```

Submit a report in PDF format that details of the following:

1.  What are kernel APIs? What is the difference between kernel APIs and system calls?

2.  What are roles of files in /boot/ (vmlinuz-\*, initrd.img-\*, grub, config\*)?

3.  Include the screenshots from tasks 1, 2 and 3 below.

####Task 1. Add “Hello World” system call
1. Prepare the virtual machine.

	>Install VirtualBox 
	
	>Download Ubuntu 11.04 Image
	http://virtualboxes.org/images/ubuntu/
	
	> You will work on this virtual machine.
	
	> To reduce time for compiling Linux kernel so you could use multiple CPU cores for your virtual machine and use ```$make -jn``` when compiling the kernel, where n is number of CPU cores.

2. Download Linux Kernel: https://www.kernel.org/ (2.6.39):
	ftp://ftp.kernel.org/pub/linux/kernel/v2.6/linux-2.6.39.tar.bz2  	

3. Extract the kernel to ```/usr/src/```

4. Write your own system call, named my_system_call.c and place it in the linux-2.6.39/kernel folder
		For example:
	```
	#include<linux/linkage.h>     
	#include<linux/kernel.h>
	
	asmlinkage long sys_hello(const char *msg)
	{
		printk(KERN_INFO “Hello I am in kernel space, %s”, msg);	
	    		return 0;
	}
	```

5. Declare your new system call in the kernel source.
Open the file ```linux-2.6.39/arch/x86/kernel/syscall_table_32.S``` and add the below line in the end of the file:
	```.long sys_hello```
Open the file ```linux-2.6.39/arch/x86/include/asm/unistd_32.h``` and add a new line after the line 
	```#define __NR_syncfs:```
	
	```
	#define NR_syshello 345
	//Change 345 to other number if it is already defined.
	```
	Change the line ```#define NR_syscalls 345``` to ```#define NR_syscalls 346```
	
	
Open the file ```linux-2.6.39/arch/x86/include/asm/unistd_64.h```, find line ```__SYSCALL(__NR_syncfs, sys_syncfs)``` and add two following lines after that line:
	
	```
	#define __NR_syshello 307
	__SYSCALL(__NR_syshello, sys_hello)
	//Change 307 to other number if it is already defined.
	```
	
Open the file ```linux-2.6.39/include/linux/syscalls.h``` and add the below line in the end of the file and before ```#endif```:
	```
	asmlinkage long sys_hello(const char *msg);
	```

6. Declare your new system call in the Makefile:

Open the file ```linux-2.6.39/kernel/Makefile``` and find out the line: obj-y += groups.o. After this line, add a new line: 
	```
	obj-y += my_system_call.o
	```
7.  Compile and install your new kernel. Assume you are in the folder ```/usr/src/linux-2.6.39```
You could strip down unnecessary modules in the kernel by following this instruction: http://linux-hacks.blogspot.com/2009/06/build-your-kernel-faster.html
	Generate new configure file and save it as ```.config```
		```
		$make oldconfig 
		$make or $make -jn, where n is number of CPU cores in your machine.
		$make modules
		$make modules_install
		$make install
		$cd /boot
		$mkinitramfs -o initrd.img-2.6.39 2.6.39
		$update-grub
		```
7. Test your new system call.
> Reboot your machine, choose your new kernel to boot.
> Compile and run this code:
> //test_syscall.c
	```
#include <stdio.h>
#include <linux/unistd.h>
#include <sys/syscall.h>
 
#define sys_hello 345
  
int main(void)
{
    char *msg = “Hello System Call”;
    syscall(sys_hello , msg);
    return 0;
}
	```
Check the output of the program: $dmesg (You should take screenshot of the output of this command)


####Task 2: Try to hook the system call: sys_open. 
When a program call ```sys_open```  on a file, let’s say ```my_file.txt```, the kernel print out a line: ```File my_file.txt is being opened```. After booting on a new modified kernel, use the command ```$dmesg```
	- Open my_file.txt then using the commands ```$dmesg``` or ```$tail -f /var/log/syslog``` to see the result.
Note that, after you done compiling the kernel for the first task, it should take much less time to recompile the kernel latter for other tasks. So be patient :-) 

####Task 3: Try to hook the system call: sys_write. 
When a program call ```sys_write``` on ```file my_file.txt```, add to the end of this file a line: ```File my_file.txt is being hacked```
	- Write a program that writes to a file then using the commands ```$dmesg``` to check the result.


