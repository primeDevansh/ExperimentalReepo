# logMarkWatney
Git/GitHub activity log & description of the experiments I perform with various technical features. By experiments I refer to the coding & various technical experiments I perform. So, below are the 2 sections of this page, logging and experimenting.

# <font color = 'red'>Log</font>

### update1_23.Mar.24 > Repo Naming Disaster!

Oh, no! What the duck! I named this repository as 'ExperimentalR**ee**po' instead of 'ExperimentalRepo'. C'mon Devansh!!! So many typos and you'll end up in JailHub! :p

### update2_06.Apr.24 > Repo Renaming

I am going rename this repo as well. Firstly, I am planning to use this as my GitHub and Git log report more than experimenting with features. Again, I will not stop experimenting! __In fact, no one should ever stop experimenting!__ Cheers! Oh, God! For how many more days do I have to remain single!?

### update3_08.Apr.24 > My Own Blog

For a long time, I've been pondering over the thought of starting my own blog. I tried many sites such as WordPress and Blogger but coudln't satisfy myself for some or the other reason. Now that I know of the GitHub pages' Jekyll thing, I'd be rolling out my own website very soon. Stay tuned! (if anyone is there, xd). 

*edit_14.Apr.24* Bro!!! My profile's README.md looks so ugly! Uh, I mean, its not that ugly but its so full of information and text. That is not good in my view. Why not shift all of this to my blog site and make that blog site more of a personal portfolio!? Let's do that! It'd be fun.

### update_17.Apr.24 > It is LIVE!

Yup! My own blog site is up and running at [primeDevansh.GitHub.io](primeDevansh.GitHub.io). It is hosted on GitHub pages. It was a nice experience rolling out my own website. Big shout-out to [Timothy Stewart](https://technotim.live/about/) for his comprehensive [Jekyll guide](https://technotim.live/posts/jekyll-docs-site/). Thanks a lot! And, anbody stalking me please make sure to give a star to my repository [here](https://github.com/primeDevansh/primeDevansh.github.io). Cheers!

# <font color = 'red'>Experiments</font>

### exp1_23.Mar.24 > Can GitHub Accept Photo and Video Data?

Tried uploading a photo to GH to see if I can use it (a pvt local repo) for photo backup. __Oh, yes! I can__ but then I found on Google that no matter what you upload, you get a storage limit of 500MB. I was disheartened to know that. If it had unlimited storage for code files (like files having an extension .cpp, .java, etc.) then I could've just changed the extension of almost all my photo files to .cpp or anything like that to upload on GH and save on my local storage. I might be wrong in some technicalities like, the way in which things are pushed to GH might change the structure of the file that could lead to a change in the image file or even a corruption.

### exp2_23.Mar.24 > What About a Large Video?

Also tried adding a video file and this is how I came across Git-lfs. Learned it today! Twas nice! xd!

### exp3_06.Apr.24 > Renaming Repos and Directos

First things first, 'directos' means 'directories', idk if this shorto would work xd! Wait, coming to the point, today I am trying to rename git repositories and trying to pull them to local git directory as well. I tweaked (ofc, the name) a repository today but couldn't pull the same to local. Since both the local and the remote were in sync, I deleted the local and re-cloned the remote. It worked! Will surely try more to get a proper way. In the way I even changed a core setting of my machine (got this from [here](https://stackoverflow.com/questions/11183788/in-a-git-repository-how-to-properly-rename-a-directory)).

```bash
git config core.ignorecase true
```

And, never forget to visit [this](https://docs.github.com/en/repositories/creating-and-managing-repositories/renaming-a-repository) page.

### exp4_07.Apr.24 > Writing Markdown Files The 'Correct' Way!

Today, I'd be learning the proper way to write .md files. Till now, I was using **p**-tags for paragraphs, **b**-tags for bold, **a**-tags for hyperlinks and many more old, HTML-fashioned way of doing stuff. From now on, I'd be following the conventional way to write a **.md** file plus, I'd be correcting most of the README files that I've written so far - slowly ofc. To get going, I'd be starting with this README.md itself.

This is the [guide](https://www.inflectra.com/Support/KnowledgeBase/KB725.aspx) that taught me some of the basics of writing a MARKDOWN file the correct way!

### exp05_07.Apr.24 > Can I Have Another Git Repository Inside an Existing Repository?

Oh, yes! I can have one more git repository under an already existing one! And it is done through [submodules](https://git-scm.com/book/en/v2Git-Tools-Submodules#:~:text=Submodules%20allow%20you%20to%20keep,and%20keep%20your%20commits%20separate.).

### exp06_14.May.24 > Adding Preprocessor Directive in The Middle of a Program!

What about adding header files as and when needed, not particularly at the beginning of a program. Let's try this out at [exp14May24.c](./exp14May24.c).

OMFG! It worked!

Variant #1

```C
void printME();

int main() {
    printME();
    return 0;
}

#include<stdio.h>

void printME() {
    printf("hi");
    return;
}
```

But, this didn't work!

```C
void printME() {
    printf("hi");
    return;
}

int main() {
    printME();
    return 0;
}

#include<stdio.h>
```

![Terminal Log](./Screenshot%202024-05-14%20at%2010.52.34%20AM.png)

### exp07_19.May.24 > Playing Around With Low-Level Memory Stuff in 'C'

Refer to [exp07_19May24.c](./exp07_19May24.c)

![Console Log](./Screenshot%202024-05-19%20at%201.01.34%20PM.png)