# gci-makefile [![Build Status](https://travis-ci.com/maxgodfrey2004/gci-makefile.svg?branch=master)](https://travis-ci.com/maxgodfrey2004/gci-makefile)
Contains code pertinent to the Google Code-in 2019 task "What is a makefile anyway?".

### Task Description

Create a Makefile which will execute a small C++ program which would output some data to a text file. A python program will then read the data from this file and plot it.

### Usage

| Command    | Functionality                                                                         |
| ---------- | ------------------------------------------------------------------------------------- |
| `make`     | Builds binaries pertinent to creation of the points file                              |
| `make run` | Invokes the Python script which in turn plots the points described in the points file |
