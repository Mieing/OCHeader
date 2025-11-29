@interface AWEGrouponCachePoolManager : NSObject

+ (void)creatGrouponImageCachePool;
+ (BOOL)enableCachePool;
+ (long long)enableCachePoolSize;
+ (id)fetchOptConfig;
+ (BOOL)enableDownloadQueuePriority;

@end
