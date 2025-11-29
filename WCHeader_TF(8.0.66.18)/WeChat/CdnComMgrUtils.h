@interface CdnComMgrUtils : NSObject

+ (BOOL)isShouldUseDCIP:(id)a0 CreateTime:(unsigned long long)a1;
+ (BOOL)isShouldUseDCIPForSnsImg:(id)a0 CreateTime:(unsigned long long)a1;
+ (id)syncBlockGetIPByUrl:(id)a0 isOldData:(BOOL)a1 dnsType:(unsigned int *)a2;

@end
