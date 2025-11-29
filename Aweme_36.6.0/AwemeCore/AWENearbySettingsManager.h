@class AWENearbyBannerResourceModel, NSString, NSArray, AWENearbyLRUCache, AWENearbyPageContext, AWEPOIInfoModel, AWETransformerPerfMonitor, AWENearbySettingsResponse;
@protocol AWEHttpTask;

@interface AWENearbySettingsManager : NSObject <AWENearbyTransformerSettingManagerProtocol>

@property (copy, nonatomic) NSString *currentResponseCityCode;
@property (copy, nonatomic) NSString *currentRequestingCityCode;
@property (retain, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (nonatomic) BOOL permanentDisplaySkylight;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (retain, nonatomic) AWENearbyLRUCache *requestParamCache;
@property (nonatomic) BOOL isHometownMode;
@property (nonatomic) BOOL isHometownLocalMode;
@property (nonatomic) BOOL isRequestComplete;
@property (retain, nonatomic) AWEPOIInfoModel *publishTaskPoi;
@property (retain, nonatomic) NSArray *transformerTabs;
@property (retain, nonatomic) AWENearbyBannerResourceModel *bannerResource;
@property (retain, nonatomic) AWENearbySettingsResponse *settingResponse;
@property (retain, nonatomic) AWETransformerPerfMonitor *perfMonitor;
@property (copy, nonatomic) id /* block */ settingsCompletion;
@property (readonly, nonatomic) BOOL enableLowLineSkyLight;
@property (readonly, nonatomic) BOOL enableLynxSkyLight;
@property (readonly, nonatomic) BOOL haveSkyLight;
@property (readonly, nonatomic) BOOL haveLowLineSkyLight;
@property (readonly, nonatomic) BOOL haveLynxSkyLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(long long)a0 pageContext:(id)a1;
- (void)refreshSettingsWithRefreshType:(unsigned long long)a0 rowType:(unsigned long long)a1 sourceType:(unsigned long long)a2 extraRequestParam:(id)a3 usePreloadCache:(id)a4 complete:(id /* block */)a5;
- (void)refreshSettingsWithRefreshType:(unsigned long long)a0 rowType:(unsigned long long)a1 cardParams:(id)a2 completion:(id /* block */)a3;
- (void)refreshSettingsWithComplete:(id /* block */)a0;
- (void)refreshSettingsWithFeedParms:(id)a0 complete:(id /* block */)a1;
- (void)refreshSettingsWithSourceType:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)a0 rowType:(unsigned long long)a1 sceneType:(long long)a2 completion:(id /* block */)a3;
- (void)refreshSettingsWithPullType:(unsigned long long)a0 Complete:(id /* block */)a1;
- (void)refreshSettingsWithPullType:(unsigned long long)a0 sourceType:(unsigned long long)a1 refreshType:(unsigned long long)a2 rowType:(unsigned long long)a3 usePreloadCache:(id)a4 feedParams:(id)a5 complete:(id /* block */)a6;
- (void)refreshSettingsWithPullType:(unsigned long long)a0 usePreloadCache:(id)a1 Complete:(id /* block */)a2;
- (void)refreshSettingsWithPullType:(unsigned long long)a0 sourceType:(unsigned long long)a1 usePreloadCache:(id)a2 feedParams:(id)a3 complete:(id /* block */)a4;
- (id)defaultTransformerTabs;
- (void)prelaodTimors:(id)a0;
- (void)preloadLynxFont;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)a0 sourceType:(unsigned long long)a1 refreshType:(unsigned long long)a2 rowType:(unsigned long long)a3 feedParams:(id)a4 sceneType:(long long)a5 completion:(id /* block */)a6;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)a0 sourceType:(unsigned long long)a1 refreshType:(unsigned long long)a2 rowType:(unsigned long long)a3 feedParams:(id)a4 cardParams:(id)a5 sceneType:(long long)a6 completion:(id /* block */)a7;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)a0 feedParams:(id)a1 completion:(id /* block */)a2;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)a0 sourceType:(unsigned long long)a1 feedParams:(id)a2 completion:(id /* block */)a3;
- (void)refreshSettingsWithRefreshType:(unsigned long long)a0 rowType:(unsigned long long)a1 sourceType:(unsigned long long)a2 complete:(id /* block */)a3;
- (void)refreshSettingsWithPullType:(unsigned long long)a0 sourceType:(unsigned long long)a1 complete:(id /* block */)a2;
- (void)refreshSettingsWithRefreshType:(unsigned long long)a0 rowType:(unsigned long long)a1 sourceType:(unsigned long long)a2 usePreloadCache:(id)a3 complete:(id /* block */)a4;
- (void)updateSettingsWithResponse:(id)a0;
- (void)onlyFecthRefreshSettingsWithPullType:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)adaptWithDatalistPulltype:(long long)a0;
- (void).cxx_destruct;
- (void)cancelCurrentRequest;

@end
