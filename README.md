## Introduction to GitHub
## Setting up git
- git config --global user.name "Your Name"
- git config --global user.email your.email@example.com
## Connecting local project to GitHub
- git init
- git remote add origin https://github.com/yourusername/repositoryname.git
- git add .
- git commit -m "Initial commit"
- git branch -M main
-  git push -u origin main
## Push to a different repository instead
- git remote set-url origin https://github.com/yourusername/correct-repo.git
- git push -u origin main
## Making and committing changes
- git add .
- git commit -m "Describe your changes"
- git push
