@interface AWEECMallDeliveryPrefetchManager : NSObject

+ (id)sharedInstance;

- (id)p_prefetchStrategyForDeliveryPrefetchTag:(id)a0;
- (void)handleTabKitPreLoadTask:(id)a0 deliveryParams:(id)a1 strategyConfig:(id)a2 perfTiming:(id)a3;
- (BOOL)p_enableTriggerNativePrefetchV2:(id)a0;
- (BOOL)p_enableTriggerNativePrefetch:(id)a0;
- (BOOL)p_enablePreloadGeckoRes:(id)a0;
- (void)prefetchDeliveryPageIfNeeded:(id)a0 deliveryParams:(id)a1;

@end
