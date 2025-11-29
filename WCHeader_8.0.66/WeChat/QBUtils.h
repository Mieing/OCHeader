@interface QBUtils : NSObject

+ (BOOL)isIpUrl:(id)a0;
+ (id)originData:(id)a0 encryptedUsingAlgorithm:(unsigned int)a1 key:(id)a2 initializationVector:(id)a3 options:(unsigned int)a4 error:(int *)a5;
+ (id)originData:(id)a0 decryptedDataUsingAlgorithm:(unsigned int)a1 key:(id)a2 initializationVector:(id)a3 options:(unsigned int)a4 error:(int *)a5;
+ (id)originData:(id)a0 _runCryptor:(struct _CCCryptor { } *)a1 result:(int *)a2;
+ (BOOL)originUrl:(id)a0 isEqualIgorningFragment:(id)a1;
+ (BOOL)isString:(id)a0 absoluteEqualToString:(id)a1;
+ (id)host:(id)a0;
+ (void)setInDic:(id)a0 key:(id)a1 value:(id)a2;
+ (void)setInDic:(id)a0 key:(id)a1 urlValue:(id)a2;
+ (void)setInDic:(id)a0 key:(id)a1 boolValue:(BOOL)a2;
+ (void)setInDic:(id)a0 key:(id)a1 intervalValue:(double)a2;
+ (id)mttDataWithHexString:(id)a0;
+ (id)mttHexString:(id)a0;
+ (id)AES128:(id)a0 Operation:(unsigned int)a1 key:(id)a2;
+ (id)AES128Encrypt:(id)a0 WithKey:(id)a1;
+ (id)AES128Decrypt:(id)a0 WithKey:(id)a1;
+ (id)des:(id)a0 WithKey:(id)a1;
+ (id)stringByConvertToCFURL:(id)a0;
+ (id)QBToJSONString:(id)a0;
+ (id)cookiesByURL:(id)a0;
+ (id)stringByRemovingPercentString:(id)a0;
+ (int)isExpired:(id)a0;
+ (void)markQBWKWebViewExist:(BOOL)a0;
+ (BOOL)isQBWKWebViewExist;

@end
