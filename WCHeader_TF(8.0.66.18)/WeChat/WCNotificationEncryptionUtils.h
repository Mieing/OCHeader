@interface WCNotificationEncryptionUtils : NSObject

+ (void)reportDecryptErrorInfo:(id)a0;
+ (void)reportDecryptError:(id)a0 withPayload:(id)a1 isFromAPNS:(BOOL)a2;
+ (void)reportGenInfoError:(id)a0 envInfo:(id)a1;
+ (void)reportCacheDecryptErrorInfoWhenAppLaunching;
+ (BOOL)isUsingCustomCache;
+ (id)cacheInfoQueue;
+ (double)createTime;
+ (BOOL)saveInfoQueue:(id)a0 envInfo:(id)a1;
+ (id)infoForIdentifier:(unsigned int)a0;
+ (void)clearCacheInfoQueue;
+ (id)activeInfo;
+ (BOOL)hasEncryptionWithPayload:(id)a0;
+ (id)decryptPayload:(id)a0 isFromAPNS:(BOOL)a1;

@end
