@interface PAGDiskCache : NSObject

+ (unsigned long long)MaxDiskSize;
+ (void)SetMaxDiskSize:(unsigned long long)a0;
+ (void)RemoveAll;

@end
