# Clud_engineering_2023

Welcome to readme file!

Below I will desribe overall purpose of this project, how the sourcecode works and how to use it via Microsoft Azure.

The sourcecode is short and it's purpose is modify load input files (extension *.sx, where x = 01,02,03 etc) to Ansys structural analysis, but it can be easily  suited to modify any other text files with similar purpose. The major benefit of editing load files directly, in opposition than launching Ansys and doing it via this software, is huge time time saving, especially when used .db files can get heavy when dealing with large models. Compiling this shot code takes fraction of seconds, while just launching the solver may take way longer than that.

Since these files are normal text files, just with different extension we need following libraires to run this code:
#include <iostream>
#include <fstream>
#include <string> 

Since in general case of mult-step Ansys anaysis we may find ourselves with multiple files with the same name but different extensions (.s01, .s02...) which differents each laod step. We need to create a variable, that will iteratively change in loop to modify each file.
For that purpose variable load_name = "Projekt.s0" + to_string(i); is used, that holds the file name (in this example "Projekt" with adequate extenion,

Next it appends /NOPR MAPDL command to the file, which supresses listing this additioanl input, to keep the output file clean.

Then you can write whatever you want to Your *.s0x file - in the example I appended additioanl structural coupling between certain nodes.

It is important to issue /GOPR command to renew command printing in the output file so we can keep track of what the solver is doing.

Then repeat these steps for all the files contained in the folder for specified in the first for loop number of times.

And that's about it when it comes to this sourcecode functionality ;)


