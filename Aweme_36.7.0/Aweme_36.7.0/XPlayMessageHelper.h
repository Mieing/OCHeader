@interface XPlayMessageHelper : NSObject

+ (id)aesEncrypt:(id)a0;
+ (id)aesDecrypt:(id)a0;
+ (id)aesOperation:(unsigned long long)a0 data:(id)a1;
+ (id)aesOperation:(unsigned long long)a0 data:(id)a1 key:(id)a2 iv:(id)a3;

@end
