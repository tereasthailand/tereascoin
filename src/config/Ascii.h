// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
" \n"
"$$$$$$$$\\ $$$$$$$$\\ $$$$$$$\\  $$$$$$$$\\  $$$$$$\\   $$$$$$\\  \n"
"\\__$$  __|$$  _____|$$  __$$\\ $$  _____|$$  __$$\\ $$  __$$\\ \n"
"   $$ |   $$ |      $$ |  $$ |$$ |      $$ /  $$ |$$ /  \\__|\n"
"   $$ |   $$$$$\\    $$$$$$$  |$$$$$\\    $$$$$$$$ |\\$$$$$$\\  \n"
"   $$ |   $$  __|   $$  __$$< $$  __|   $$  __$$ | \\____$$\\ \n"
"   $$ |   $$ |      $$ |  $$ |$$ |      $$ |  $$ |$$\\   $$ |\n"
"   $$ |   $$$$$$$$\\ $$ |  $$ |$$$$$$$$\\ $$ |  $$ |\\$$$$$$  |\n"
"   \\__|   \\________|\\__|  \\__|\\________|\\__|  \\__| \\______/ \n";

const std::string nonWindowsAsciiArt = 
" \n"
"$$$$$$$$\\ $$$$$$$$\\ $$$$$$$\\  $$$$$$$$\\  $$$$$$\\   $$$$$$\\  \n"
"\\__$$  __|$$  _____|$$  __$$\\ $$  _____|$$  __$$\\ $$  __$$\\ \n"
"   $$ |   $$ |      $$ |  $$ |$$ |      $$ /  $$ |$$ /  \\__|\n"
"   $$ |   $$$$$\\    $$$$$$$  |$$$$$\\    $$$$$$$$ |\\$$$$$$\\  \n"
"   $$ |   $$  __|   $$  __$$< $$  __|   $$  __$$ | \\____$$\\ \n"
"   $$ |   $$ |      $$ |  $$ |$$ |      $$ |  $$ |$$\\   $$ |\n"
"   $$ |   $$$$$$$$\\ $$ |  $$ |$$$$$$$$\\ $$ |  $$ |\\$$$$$$  |\n"
"   \\__|   \\________|\\__|  \\__|\\________|\\__|  \\__| \\______/ \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
