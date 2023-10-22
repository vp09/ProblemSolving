# Welcome to Python Training contributing guide <!-- omit in toc -->

Thank you for investing your time in the python training and contributing to our project! :sparkles:. 

In this guide you will get an overview of the contribution workflow.

# Contributing Guidelines 👨‍💻
## 👨‍💻 Prerequisite Skills to Contribute

### Contribute in public/Profile

- [Git](https://git-scm.com/) 
- [Basic Python](https://pythonbasics.org/)

### Contribute in Documents

- [Markdown](https://www.markdownguide.org/basic-syntax/)

To get an overview of the project, read the [README](README.md). Here are some resources to help you get started with open source contributions:

- [Finding ways to contribute to open source on GitHub](https://docs.github.com/en/get-started/exploring-projects-on-github/finding-ways-to-contribute-to-open-source-on-github)
- [Set up Git](https://docs.github.com/en/get-started/quickstart/set-up-git)
- [GitHub flow](https://docs.github.com/en/get-started/quickstart/github-flow)
- [Collaborating with pull requests](https://docs.github.com/en/github/collaborating-with-pull-requests)


## Getting started

Since all of you have Anaconda installed on your system, we need to check if git too is availble on your system. 
Open Anaconda Navigator, and launch Powershell
<br><br>
![image](https://user-images.githubusercontent.com/29499251/192686552-5d260efe-9a6e-4e19-87fc-5370af4b9a4c.png)
<br><br>

When the shell is open, Type the command <code>git --version</code><br>
You should see an output similar to the screenshot below.

<br><br>
![image](https://user-images.githubusercontent.com/29499251/192686924-f4b053ad-1cef-4cda-ad65-fb5dc28e24ae.png)



### Issues

#### Look for a suitable issue

Go to the <img src="https://user-images.githubusercontent.com/29499251/192687552-aa2429dc-0c5c-4e8b-8251-72baf2f73247.png" height="35"> tab, and look for a issue you would like to address, 
open the issue and add a comment that you would like to contibute to this issue to let the maintainer know that you are working on it, and what exactly you are doing.
make sure someone else is not already doing the same thing.

### Sign up for Github
To contribute to this as well as to check out millions of amazing projects, you will need to sign up for github, 
which is a clowd implementation of git. You can use this as a backup for you repositories and save them from accedental deletion.


## 💥 How to Contribute

[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](https://github.com/vp09/ProblemSolving/pulls)
[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.png?v=103)](https://github.com/vp09/)

- Take a look at the existing [Issues](https://github.com/vp09/ProblemSolving/issues) or [create a new issue](https://github.com/vp09/ProblemSolving/issues/new/choose)!
- [Fork the Repo](https://github.com/Susmita-Dey/all-round-calculator/fork). Then, create a branch for any issue that you are working on. Finally, commit your work.
- Create a **[Pull Request](https://github.com/vp09/ProblemSolving/compare)** (_PR_), which will be promptly reviewed and given suggestions for improvements by the community.
- Add screenshots or screen captures to your Pull Request to help us understand the effects of the changes proposed in your PR.


---
## ⭐ HOW TO MAKE A PULL REQUEST:

**1.** Start by making a Fork of the [**ProblemSolving**](https://github.com/vp09/ProblemSolving/) repository. Click on the <a href="https://github.com/vp09/ProblemSolving/fork"><img src="https://i.imgur.com/G4z1kEe.png" height="21" width="21"></a>Fork symbol at the top right corner.

**2.** Clone your new fork of the repository in the terminal/CLI on your computer with the following command:

```bash
git clone https://github.com/<your-github-username>/ProblemSolving
```

**3.** Navigate to the newly created LinkFree project directory:

```bash
cd ProblemSolving
```

**4.** Set upstream command:

```bash
git remote add upstream https://github.com/<your-github-username>/ProblemSolving.git
```

**5.** Create a new branch:

```bash
git checkout -b YourBranchName
```

**6.** Sync your fork or your local repository with the origin repository:

- In your forked repository, click on "Fetch upstream"
- Click "Fetch and merge"

### Alternatively, Git CLI way to Sync forked repository with origin repository:

```bash
git fetch upstream
```

```bash
git merge upstream/main
```

### [Github Docs](https://docs.github.com/en/github/collaborating-with-pull-requests/addressing-merge-conflicts/resolving-a-merge-conflict-on-github) for Syncing

**7.** Make your changes to the source code.

**8.** Stage your changes and commit:

⚠️ **Make sure** not to commit `package.json` or `package-lock.json` file

⚠️ **Make sure** not to run the commands `git add .` or `git add *`. Instead, stage your changes for each file/folder

```bash
git add public
```

```bash
git commit -m "<your_commit_message>"
```

**9.** Push your local commits to the remote repository:

```bash
git push origin YourBranchName
```

**10.** Create a [Pull Request](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request)!

**11.** **Congratulations!** You've made your first contribution to [**ProblemSolving**](https://github.com/vp09/ProblemSolving/graphs/contributors)! 🙌🏼

**_:trophy: After this, the maintainers will review the PR and will merge it if it helps move the all-round-calculator project forward. Otherwise, it will be given constructive feedback and suggestions for the changes needed to add the PR to the codebase._**

---

## Style Guide for Git Commit Messages :memo:

**How you can add more value to your contribution logs:**

- Use the present tense. (Example: "Add feature" instead of "Added feature")
- Use the imperative mood. (Example: "Move item to...", instead of "Moves item to...")
- Limit the first line (also called the Subject Line) to _50 characters or less_.
- Capitalize the Subject Line.
- Separate subject from body with a blank line.
- Do not end the subject line with a period.
- Wrap the body at _72 characters_.
- Use the body to explain the _what_, _why_, _vs_, and _how_.
- Reference [Issues](https://github.com/vp09/ProblemSolving/issues) and [Pull Requests](https://github.com/vp09/ProblemSolving/pulls) liberally after the first line.

---
## 💥 Issues

In order to discuss changes, you are welcome to [open an issue](https://github.com/vp09/ProblemSolving/issues/new/choose) about what you would like to contribute. Enhancements are always encouraged and appreciated.

## All the best! 🥇

[![built with love](https://forthebadge.com/images/badges/built-with-love.svg)](https://github.com/vp09)
