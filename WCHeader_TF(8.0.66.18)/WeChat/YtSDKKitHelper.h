@interface YtSDKKitHelper : NSObject

+ (id)yt_imageNamed:(id)a0;
+ (id)yt_getUIBundlePath;
+ (id)strToNSSt:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a0;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })nsstrToSt:(id)a0;
+ (id)randomStringWithLength:(long long)a0;
+ (id)generateEncReq:(id)a0 requestContent:(id)a1 appId:(id)a2 sessionId:(id)a3 config:(id)a4;
+ (id)parseResStr:(id)a0;
+ (id)AES128Encrypt:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)AES128Decrypt:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)getmd5WithString:(id)a0;
+ (id)getMD5WithData:(id)a0;

@end
