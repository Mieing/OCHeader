@class HMDThreadSafeArray, NSTimer, YYMemoryCache, NSString;
@protocol AFDMomentColorRingCacheProtocol;

@interface AFDMomentItemDataProvider : NSObject <AWEUserMessage>

@property (retain, nonatomic) HMDThreadSafeArray *requestingItems;
@property (retain, nonatomic) id<AFDMomentColorRingCacheProtocol> colorRingSource;
@property (retain, nonatomic) NSTimer *localStorageTimer;
@property (nonatomic) double writeLocalInterval;
@property (retain, nonatomic) YYMemoryCache *IMCache;
@property (readonly, nonatomic) BOOL isCachePrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)cacheMomentWithModel:(id)a0;
- (id)retrieveLocalAwemeList;
- (id)retrieveCachedAwemeForItemID:(id)a0;
- (BOOL)colorRingCachePrepared;
- (void)updateCachedAwemeForItems:(id)a0;
- (id)retrieveCachedAwemeList;
- (void)preloadAwemeCacheWithRequestParams:(id)a0 fromScene:(long long)a1;
- (BOOL)enableMomentColorRingCacheOptimization;
- (void)onReceivedModelDeleted:(id)a0;
- (void)cacheMomentWithModel:(id)a0 fromScene:(long long)a1;
- (BOOL)isValidAweme:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetCache;
- (void)dealloc;
- (void)addObservers;

@end
