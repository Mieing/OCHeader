@interface WTLoginMgr : MMObject

+ (id)getWTLoginAPIInstance;
+ (id)getLoginBuffer:(id)a0 psw:(id)a1 pwdMd5:(id)a2;
+ (id)getCheckVerifyBuffer:(id)a0;
+ (BOOL)resolveServerPackage:(id)a0 WithDictionary:(id)a1;
+ (void)clearPwdSig:(unsigned long long)a0;

@end
