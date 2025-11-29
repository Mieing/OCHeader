@interface AWEPOITagRateDeleteDataManager : NSObject

+ (id)rateIdWithNotification:(id)a0;
+ (void)poiAwemeFetchDeleteDataWithParams:(id)a0 eventAttachedParams:(id)a1 completion:(id /* block */)a2;
+ (void)updateAnonymousStatusFetchWithParams:(id)a0 eventAttachedParams:(id)a1 completion:(id /* block */)a2;
+ (void)publishEventWithName:(id)a0 eventAttachedParams:(id)a1;
+ (void)publishGoodsDetailRefreshEventIfNeedWithParams:(id)a0 eventAttachedParams:(id)a1;

@end
