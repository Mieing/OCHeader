@interface ITMCommonConvert : NSObject

+ (id)convertToNSString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a0;
+ (int)convertToInt:(unsigned long long)a0 defaultValue:(unsigned long long)a1;
+ (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })convertToStringVector:(id)a0;
+ (id)convertValueWrappersToDictionary:(struct vector<ILASDK::ValueWrapper, std::allocator<ILASDK::ValueWrapper>> { struct ValueWrapper *x0; struct ValueWrapper *x1; struct __compressed_pair<ILASDK::ValueWrapper *, std::allocator<ILASDK::ValueWrapper>> { struct ValueWrapper *x0; } x2; })a0;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })convertToString:(id)a0;

@end
