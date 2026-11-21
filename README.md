# Pandora-s-Box-and-Locksmith
Program based on the Linux Exploit Suggester to test vertical escalation into a system and use create spam files to indicate a failure.

## Instructions

### The Locksmith
After compiling plocksmith.c and running it, you can choose Y/N to download sources and binaries, and choose to output to a file instead of to a terminal.
It is recommended to choose the terminal, because the output is by default formatted for the terminal and can look strange (although still very readable) in a raw text file.

### The Box
Psuedo-malware that creates 512 (by default) spam files in the system. This is intended as the "payload" for a subverted system.

## Dependency
This program is dependent on the Linux Exploit Suggester and therefore includes it by default, and inherits the GNU General Public License.
Link to the Linux Exploit Suggester's repository: https://github.com/The-Z-Labs/linux-exploit-suggester
