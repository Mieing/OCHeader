@class NSDictionary;

@interface ACCWebImageUtility : NSObject

@property (retain, nonatomic) NSDictionary *diskOptimizeParams;

+ (id)customCacheName;
+ (unsigned long long)memorySizeLimit;
+ (unsigned long long)diskSizeLimit;
+ (unsigned long long)diskAgeLimit;
+ (unsigned long long)largeImageMemoryLimit;
+ (long long)insulatedCacheType;
+ (unsigned long long)largeImageMemorySizeLimit;
+ (BOOL)enableDiskOptimize;
+ (BOOL)enableLargeImageOptimize;
+ (id)diskOptimizeCacheName;
+ (double)timeoutInterval;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
