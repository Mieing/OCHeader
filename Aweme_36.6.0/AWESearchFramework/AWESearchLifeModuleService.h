@class NSString;

@interface AWESearchLifeModuleService : NSObject <AWESearchLifeBundleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)identifierForPreRequestWithRootTag:(id)a0;
- (BOOL)useParamsProvider;
- (id)getNearbySearchEntranceViewWithEnterFrom:(id)a0 previousEnterFrom:(id)a1 cityCode:(id)a2 pageType:(long long)a3 searchBtnStyle:(unsigned long long)a4 leftSubview:(id)a5 delegate:(id)a6;
- (long long)getGroupFeedLoadmoreCountForGroupBuySearchRefresh;
- (id)newAWESearchGroupBuyViewControllerInitWithConfig:(id)a0;
- (id)newAWESearchLifeServiceLiveViewControllerInitWithConfig:(id)a0;
- (id)newAWESearchLifeServiceVideoViewControllerInitWithConfig:(id)a0;
- (id)getSearchLifeServiceSearchChannel:(id)a0;
- (id)getAWESearchMiddlePOIViewControllerWithRouterModel:(id)a0;
- (Class)getGroupBuyViewControllerClass;
- (Class)getLifeVideoViewControllerClass;
- (id)getAWESearchGroupBuyVCVerticalPreRequestManager:(Class)a0;
- (id)getGroupByPreRequestParams:(Class)a0 isManualPreRequest:(BOOL)a1 shouldStoreHistory:(BOOL)a2 clientServerPassForOnce:(id)a3 isPredictFetch:(BOOL)a4 isManualPreRequest:(BOOL)a5 routerModel:(id)a6;
- (void)removeCouponPopFromVC:(id)a0;
- (unsigned long long)getNearbySearchEntranceViewScrollThreshold;
- (BOOL)getEnableGroupBuySearchRefreshOptIn202406;
- (double)getGroupFeedCardConsumeTimeForGroupBuySearchRefresh;
- (BOOL)getEnableGroupBuySearchRefreshOptIn202406WithEnterFrom:(id)a0;
- (id)getSearchLocationAuthBarView;
- (id)lifeServiceSearchTabModels;
- (BOOL)isLifeMallScenesForEnterFrom:(id)a0 from:(id)a1;
- (BOOL)isLifeServiceBlockedFrom:(id)a0;
- (BOOL)isNearbyLifeMallChannelForEnterFrom:(id)a0;
- (BOOL)isProductPageForEnterFrom:(id)a0;
- (id)getPOICityStringWithSchemaModel:(id)a0;
- (id)getLifeServicePreCreatedSchemaModel;
- (BOOL)shouldShowTabbarInLifeServiceSearch;
- (id)fetchLifeServiceSearchTabConfig;
- (unsigned long long)tabBarLandingStrategy;
- (void)fetchLifeServiceTabModelsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchLifeServiceTabLandingStrategyWithParams:(id)a0 completion:(id /* block */)a1;
- (id)getLifeServiceLynxExtraParamsWithSchemaModel:(id)a0;
- (void)setupLifeServiceLogData:(id)a0 withSchemaModel:(id)a1;
- (id)lifeParamsFromSchemaModel:(id)a0;
- (BOOL)isFromLifeHotelChannelSearchWithSchemaModel:(id)a0;
- (BOOL)isEmptyQuerySearchWithSchemaModel:(id)a0;
- (id)fetchLifeChannelValueFromSchemaModel:(id)a0;
- (id)fetchSaleChannelWithSchemaModel:(id)a0;
- (BOOL)shouldForceDisplayLightModeUIWithEnterFrom:(id)a0;
- (BOOL)shouldLife7PageRestoreLeftBackButtonEnabled;
- (BOOL)shouldPassLifeSearchRealtimeUserActions;
- (id)getLifeSearchRealtimeUserActions;
- (BOOL)shouldLifeSearch7PageManualPreRequestEnabled;
- (id)locationAuthPopupBlacklist;
- (void)showPOIAuthorizationPopupIfNeeded:(BOOL)a0 from:(id)a1 extraLogParams:(id)a2 withHandler:(id /* block */)a3;
- (void)showPOIAuthPopupOnceInLifetimeWithFrom:(id)a0 extraLogParams:(id)a1 withHandler:(id /* block */)a2;
- (void)showPOIAuthPopupWithFrequencyLimitEnable:(BOOL)a0 from:(id)a1 extraLogParams:(id)a2 withHandler:(id /* block */)a3;
- (void)requestLocateWithHandler:(id /* block */)a0;
- (void)showPOIAuthGuideBottomBarAddOnView:(id)a0 from:(id)a1 extraLogParams:(id)a2 completion:(id /* block */)a3;
- (void)jumpToSettingPOIAuth;
- (BOOL)hasLocationAuthPermission;
- (void)requestLocationInfoIfNeedInMiddlePageWithKeyword:(id)a0 previousPage:(id)a1 refer:(id)a2;
- (id)authBarTitle;
- (id)authBarActionText;
- (id)getSelectAreaViewControllerWithFilterData:(id)a0;
- (id)getLifeServicePageDynamicConfigWithParams:(id)a0;

@end
