@interface AWEFeedECInstantAnchorConfig : AWEFeedTemplateAnchorBaseConfig

@property (nonatomic) BOOL shouldTrackDetailShowWhenAnchorViewShow;
@property (nonatomic) BOOL isUpdatingInfo;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (void)didShowDoubleLineStyleAnchor;
- (void)fetchStoreListWithShopId:(id)a0 productId:(id)a1 awemeModel:(id)a2 aweECService:(id)a3 completion:(id /* block */)a4;
- (void)fetchAnchorInfoWithShopId:(id)a0 storeId:(id)a1 subProductId:(id)a2 awemeModel:(id)a3 isFallback:(BOOL)a4 needAddress:(BOOL)a5 aweECService:(id)a6 completion:(id /* block */)a7;
- (void)handleAnchorViewClickedWithAwemeModel:(id)a0 position:(id)a1;
- (id)BTMParams;
- (id)BTMID;
- (id)instantBizMap;
- (id)instantBizExtra;
- (void)fetchInstantBizInfoWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (id)instantBizOpenURL;
- (id)instantBizSubDesc;
- (id)BTMToken;
- (void)trackInstantProductEntranceClickWithAwemeModel:(id)a0;
- (void)trackInstantProductEntranceShowSubpidWithAwemeModel:(id)a0;
- (void)trackInstantProductEntranceShowWithAwemeModel:(id)a0;
- (void)trackInstantProductEntranceShowDetailWithAwemeModel:(id)a0;
- (id)hostViewController;

@end
