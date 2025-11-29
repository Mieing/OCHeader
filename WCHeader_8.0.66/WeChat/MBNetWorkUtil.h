@interface MBNetWorkUtil : NSObject

+ (unsigned int)getIntNetworkType;
+ (id)getNetworkType;
+ (id)stringByEscapingQueryString:(id)a0;
+ (void)kv_27740:(id)a0 functionName:(id)a1 url:(id)a2 method:(id)a3 sentSize:(unsigned long long)a4 receivedSize:(unsigned long long)a5 statusCode:(unsigned int)a6 result:(unsigned int)a7 costTime:(unsigned long long)a8 dstPath:(id)a9 contentType:(id)a10;

@end
