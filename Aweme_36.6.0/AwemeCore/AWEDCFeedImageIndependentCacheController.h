@class BDImageCache;

@interface AWEDCFeedImageIndependentCacheController : AWEDCFeedBaseController

@property (retain, nonatomic) BDImageCache *diskCache;

+ (id)abConfig;
+ (id)memoryConfig;
+ (id)diskConfig;
+ (BOOL)avatarEnableIndependentCache;
+ (long long)imageCacheStyle;
+ (void)updateMemoryConfig:(id)a0;
+ (void)updateDiskConfig:(id)a0;

- (void)setupMemoryCache;
- (void)setupImageCache;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
