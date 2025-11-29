@class NSMutableDictionary;

@interface IESECTabKitPrefetchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *prefetchMap;

+ (void)preLoadGeckoResource:(id)a0 containerType:(unsigned long long)a1 useBDXForest:(BOOL)a2;
+ (BOOL)useInjectOpenTime:(id)a0;
+ (void)preconnectHostForBizTag:(id)a0;
+ (void)prefetchFirstScreenWithBizTag:(id)a0 useBDXForest:(BOOL)a1;
+ (BOOL)enableTimeConsumingOpt;
+ (void)preloadTabsIdleWithBizTag:(id)a0 bffModel:(id)a1 hybridService:(id)a2;
+ (id)sharedInstance;

- (id)triggerTabKitPrefetchWithRouterParams:(id)a0 requestFrom:(id)a1;
- (void)triggerTabKitPrefetchNewImplWithRouterParams:(id)a0 monitorInfo:(id)a1 perfTiming:(id)a2;
- (void)prefetchDataWithRouterParams:(id)a0 callback:(id /* block */)a1;
- (id)prefetchDataWithRouterParams:(id)a0;
- (id)requestResForRouterParams:(id)a0 extraInfo:(id)a1;
- (id)requestResForRouterParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
