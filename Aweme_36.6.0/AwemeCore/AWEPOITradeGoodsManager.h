@class NSString, NSObject;
@protocol AWEDynamicCardContextProtocol;

@interface AWEPOITradeGoodsManager : NSObject <AWEPOITradeGoodsServiceProtocol>

@property (weak, nonatomic) NSObject<AWEDynamicCardContextProtocol> *dynamicCardContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)preloadConcernGoodsCardWithDataArray:(id)a0 fromIndex:(int)a1 dataSourceCount:(int)a2 fetchType:(long long)a3;
- (void)showGoodsServiceUnsubscribePopupViewWithAwemeModel:(id)a0;
- (id)generateShareWebPOIGoodsModelWithAweme:(id)a0;
- (id)generateShareWebPOIGoodsModelForContextTargetWithAweme:(id)a0;
- (void)dislikePOIGoodsCardWithAweme:(id)a0;
- (void)updateGoodsSubscribeStatusWithOperation:(long long)a0 forUser:(id)a1 completionHandler:(id /* block */)a2;
- (id)aweNearbyModuleService;
- (long long)mapSubscribeStatus:(id)a0;
- (id)imExtra:(id)a0;
- (void)removeDCardInFeedFromDataArray:(id)a0 withFetchType:(long long)a1 dataSourceCount:(int)a2;
- (void)getSubscribeGoodsSettingStatusCompletion:(id /* block */)a0;
- (void)sendLongPressPanelEventWithEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
