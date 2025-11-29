@interface AntSecurityManager : NSObject

+ (id)securityEncrypt:(id)a0;
+ (id)securityDecrypt:(id)a0;
+ (id)wbSign:(id)a0;
+ (int)setSafeStore:(id)a0 value:(id)a1 bizType:(id)a2;
+ (id)getSafeStore:(id)a0 bizType:(id)a1;
+ (int)deleteSafeStore:(id)a0 bizType:(id)a1;
+ (id)getStorageFilePath;

@end
