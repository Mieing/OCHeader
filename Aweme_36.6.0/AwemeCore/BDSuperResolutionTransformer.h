@interface BDSuperResolutionTransformer : BDBaseTransformer

@property (class, nonatomic) double minLevel;
@property (class, nonatomic) double maxLevel;
@property (class, nonatomic) BOOL enableMultiThread;
@property (class, nonatomic) unsigned long long maxConcurrentCount;
@property (class, nonatomic) unsigned long long concurrencyExceededStrategy;
@property (class, nonatomic) unsigned long long maxCacheCount;

@property (nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (nonatomic) unsigned long long cacheControl;

+ (void)removeSuperResolutionCache_sync;
+ (void)removeSuperResolutionCache_async;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
