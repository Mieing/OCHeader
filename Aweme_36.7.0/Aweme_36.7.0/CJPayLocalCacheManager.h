@class NSMutableDictionary, NSTimer, CJPayLocalCacheConfig, NSObject;
@protocol OS_dispatch_queue, CJPayEngimaProtocol;

@interface CJPayLocalCacheManager : NSObject

@property (retain, nonatomic) CJPayLocalCacheConfig *cacheConfig;
@property (retain, nonatomic) NSMutableDictionary *mmapFeaturesMutableDict;
@property (nonatomic) BOOL hasNewChange;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSTimer *saveTriggerTimer;
@property (retain, nonatomic) id<CJPayEngimaProtocol> enigmaEngine;

- (id)allFeaturesFor:(id)a0 conditionBlock:(id /* block */)a1;
- (void)p_tryReduceCacheAndMerge:(id)a0;
- (BOOL)appendFeatures:(id)a0;
- (BOOL)synchronize;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)loadCache;
- (BOOL)appendFeature:(id)a0;

@end
