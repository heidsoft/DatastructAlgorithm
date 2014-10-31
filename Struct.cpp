// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
// author heidsoft@sina.com
#include <stdio.h>
#include <iostream>

using namespace std;

#ifndef Heidsoft_h
#define Heidsoft_h
//this is define my vars
#endif

struct MyStruct
{

};
typedef struct MyStruct * PrtMyStruct;//定义一个我的结构指针类型的别名
typedef struct MyStruct   noPrtMyStruct;//定义一个我的结构类型的别名

typedef struct TreeNode
{

} *PtrTreeNode;

typedef int NoHeidsoft_int;
typedef int * PrtHeidsoft_int;
int main(){
	printf("hello world\n");
	printf("PtrTreeNode Type Size=%d\n", sizeof(PtrTreeNode));
	std::cout << "this is test heidsoft _int size,this size from base type [int]" << std::endl;
	printf("int  Type Size=%d\n", sizeof(NoHeidsoft_int));
	printf("int * Type Size=%d\n", sizeof(PrtHeidsoft_int));
	#ifdef Heidsoft_h
	printf("this is a test heidsoft define ................\n");
	#endif

	printf("MyStruct Type Size=%d\n", sizeof(MyStruct));
	printf("(MyStruct *)Type Size=%d\n", sizeof(PrtMyStruct));
	printf("noPrtMyStruct Type Size=%d\n", sizeof(noPrtMyStruct));
	return 0;
}
