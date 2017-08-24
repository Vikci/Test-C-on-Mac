**Install GCC and XCode on Mac OS**

- Download and install XCode from [here](https://developer.apple.com/xcode/)
- Install gcc

```shell
$ brew install gcc
$ gcc -v

Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 8.0.0 (clang-800.0.42.1)
Target: x86_64-apple-darwin15.6.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

$ cd ./Project/cfiles
$ gcc test.c  # This will generate a file called a.out inside cfiles folder.
```
- Define output file name:

```shell
$ gcc test.c -o what-you-want-the-program-to-be-named
$ gcc -Wall -o what-you-want-the-program-to-be-named test.c
```

- Launch this output file:

```shell
$ ./a.out # executed
```

