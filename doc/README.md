SUPERDOGE
=====================

Setup
---------------------
[SUPERDOGE](http://superdoge.net) is the original SUPERDOGE client and it builds the backbone of the network. However, it downloads and stores the entire history of SUPERDOGE transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run SUPERDOGE on your native platform.

### Unix

Unpack the files into a directory and run:

- bin/32/superdoge-qt (GUI, 32-bit) or bin/32/superdoged (headless, 32-bit)
- bin/64/superdoge-qt (GUI, 64-bit) or bin/64/superdoged (headless, 64-bit)

### Windows

Unpack the files into a directory, and then run superdoge-qt.exe.

### OSX

Drag SUPERDOGE-Qt to your applications folder, and then run SUPERDOGE-Qt.



Building
---------------------
The following are developer notes on how to build SUPERDOGE on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Gitian Building Guide](gitian-building.md)
- [Windows Build Notes] (build-windows.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
