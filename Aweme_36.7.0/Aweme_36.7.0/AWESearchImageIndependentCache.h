@class BDImageCache;

@interface AWESearchImageIndependentCache : NSObject

@property (retain, nonatomic) BDImageCache *cache;

+ (BOOL)enableImageIndependentCache;
+ (id)generalSearchImageIndependentCacheName;
+ (id)cacheConfigInfo;
+ (void)registerGeneralSearchImageCache;

- (void).cxx_destruct;

@end
