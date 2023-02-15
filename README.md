# Commands Trace

<!-- inital commit and main branch -->

- git init
- touch README.md
- git add README.md
- git commit -m "init commit"
- git branch -M main
- git remote add origin git@github.com:adel-elmala/versionControlAssignment_siemens.git
- git push -u origin main

- git add main.cpp Makefile
- git commit -m "getSum"
- git push -u origin main

<!-- branch 1 & 2 -->

- git branch avg min

<!-- update branch 1 -->

- git checkout avg
- git add main.cpp Makefile
- git commit -m "getAverage"
<!-- merge avr -> main -->
- git checkout main
- git merge avg

<!-- update branch 2 -->

- git checkout min
- git add main.cpp Makefile
- git commit -m "getMin"

<!-- merge min -> main -->

- git checkout main
- git merge min

<!-- Fix conflicts -->

- git commit -m "merge"
- git push -u origin main
