@class NSString, NSMutableDictionary, NSObject, NSCache;
@protocol OS_dispatch_source;

@interface LynxTextRendererCache : NSObject <NSCacheDelegate> {
    NSCache *_cache;
    NSMutableDictionary *_attrStringRenderers;
}

@property (nonatomic) long long hitCount;
@property (nonatomic) long long missCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cache;

- (id)rendererWithString:(id)a0 layoutSpec:(id)a1;
- (unsigned long long)totalCostLimitFromSettings;
- (void)startTimeCounter;
- (BOOL)isEnableCache:(id)a0;
- (id)_suitableRendererWithString:(id)a0 layoutSpec:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)cache:(id)a0 willEvictObject:(id)a1;

@end
