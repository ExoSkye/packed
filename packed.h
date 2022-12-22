/*
 * MIT License
 *
 * Copyright (c) 2022 ProtoByter
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */



#ifdef __GNUC__
    #define PACKED_STRUCT(__decl__) struct __attribute__((packed)) __decl__
#elif defined(_MSC_VER)
    #define PACKED_STRUCT(__decl__) __pragma( pack(push, 1) ) __decl__ __pragma( pack(pop))
#elif defined(__clang__)
    #define PACKED_STRUCT(__decl__) struct __attribute__((packed)) __decl__
#elif defined(__CC65__)
    #warning This compiler (CC65) does not support packed structs
    #define PACKED_STRUCT(__decl__) struct __decl__
#elif defined(__SDCC)
    #warning This compiler (SDCC) does not support packed structs
    #define PACKED_STRUCT(__decl__) struct __decl__
#elif defined(__TINYC__)
    #define PACKED_STRUCT(__decl__) struct __attribute__((packed)) __decl__
#else
    #ifndef UNSUPPORTED_COMPILER_WARNING
        #define UNSUPPORTED_COMPILER_WARNING
        #warning This library does not currently have support for your compiler, consider submitting a pull-request for it?
        #define PACKED_STRUCT(__decl__) struct __decl__
    #endif
#endif
