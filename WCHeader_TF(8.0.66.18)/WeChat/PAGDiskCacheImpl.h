@interface PAGDiskCacheImpl : NSObject

+ (unsigned long long)MaxDiskSize;
+ (void)SetMaxDiskSize:(unsigned long long)a0;
+ (void)RemoveAll;
+ (id)ReadFile:(id)a0;
+ (BOOL)WritFile:(id)a0 data:(id)a1;

@end
