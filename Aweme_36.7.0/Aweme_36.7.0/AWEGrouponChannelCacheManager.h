@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEGrouponChannelCacheManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)autoCleanCache;
- (id)getCacheWithSchema:(id)a0 extraParams:(id)a1;
- (id)getCacheIndex;
- (id)_generateFullCacheKeyWithSchema:(id)a0 extraParams:(id)a1;
- (void)_updateCacheIndexWithKey:(id)a0 visitTime:(double)a1;
- (void)_cleanCacheIfOverMaxCount;
- (BOOL)checkParamsMatchWithCurrentSchema:(id)a0 cacheModel:(id)a1;
- (void)updateCacheWithParamsModel:(id)a0;
- (void)deleteCacheWithSchema:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
