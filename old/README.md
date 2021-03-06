# Zoom

This is a brand-new programming language that's being drafted.

## Aim

To create a modular, concise server-side language that's blazing fast. Developers will be able to create concurrent, parallel and even distributed systems, all with the same syntax. Zoom will be high-level and dynamically typed, but compiled to native machine code.

## How it works

Currently, the compiler is written in JavaScript (Node.js) but will eventually be ported to Zoom itself. Zoom source code is compiled to C++ temporarily, before using the system's compiler to generate machine code.

## Contributing

The core concepts of Zoom are still under development, so I'm welcoming suggestions.

You can also begin the process of error-checking, by compiling malformed source code, and adding checks to the compiler and `zoom.h`.

## To do

There's a lot to be done, and you can find what's planned [here](todo.md).

## License

MIT License

Copyright (c) 2018

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
