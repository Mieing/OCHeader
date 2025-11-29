@class AWEHPRenderResponseModel, NSString, AWEHPTopTabConfigModel, AWEHPChannelNetworkManager, AWEHPBottomTabConfigModel, AWEHomePageContext;
@protocol AWEHPChannelDataManagerDelegate, AWEHPDefaultTabFactoryProtocol;

@interface AWEHPChannelDataManager : NSObject

@property (nonatomic) BOOL isServerTab;
@property (retain, nonatomic) AWEHPRenderResponseModel *renderData;
@property (retain, nonatomic) AWEHPBottomTabConfigModel *bottomTab;
@property (retain, nonatomic) AWEHPTopTabConfigModel *topTab;
@property (copy, nonatomic) NSString *rightFirstEntrance;
@property (retain, nonatomic) AWEHomePageContext *context;
@property (copy, nonatomic) NSString *currentUserID;
@property (nonatomic) long long requestionSession;
@property (retain, nonatomic) AWEHPChannelNetworkManager *dataManager;
@property (retain, nonatomic) id<AWEHPDefaultTabFactoryProtocol> defaultManager;
@property (nonatomic) BOOL homePageContextEnable;
@property (weak, nonatomic) id<AWEHPChannelDataManagerDelegate> delegate;

+ (id)sharedInstance;

- (void)loadCacheData;
- (BOOL)p_getRenderResponse:(id *)a0;
- (id)p_createHomePageContext;
- (void)p_requestWithType:(unsigned long long)a0 canHotReload:(BOOL)a1 editModel:(id)a2 completion:(id /* block */)a3;
- (BOOL)isLastRenderRequestTimeout;
- (BOOL)isRenderRequesting;
- (BOOL)p_rightEntranceChangedWithTopTab:(id)a0;
- (BOOL)p_allowBottomTabHotReloadWithNewBottomTabList:(id)a0 oldBottomTabList:(id)a1;
- (void)reloadHomePageContextWithBottomTab:(id)a0 topTab:(id)a1;
- (id)createPageContextNodeWithBottomTab:(id)a0;
- (id)createPageContextNodeWithTopTab:(id)a0;
- (id)createPageContextNodeWithXTabChannelInfo:(id)a0;
- (void)reloadHomePageContextWithTopTab:(id)a0;
- (void)p_newCallAccountChangeTabsReloadWithReloadType:(unsigned long long)a0 subType:(id)a1;
- (long long)p_checkHotReloadForNewAccountWithBottomTab:(id)a0 topTab:(id)a1;
- (BOOL)p_getRenderResponseForAccountChanged:(id *)a0 oldResponse:(id)a1;
- (void)p_reloadTabsWithReloadType:(id)a0 isServerTab:(BOOL)a1 renderResponse:(id)a2 allowReloadBottomTab:(BOOL)a3;
- (long long)p_allowHotReloadWhenSplash;
- (long long)p_checkHotReloadEnableForEnvironmentWithRequestType:(unsigned long long)a0;
- (void)p_trackHotSwitchWithStatus:(long long)a0 requestType:(unsigned long long)a1;
- (long long)p_checkHotReloadForDataWithBottom:(id)a0 topTab:(id)a1;
- (void)p_hotReloadForNetworkResponseWithRequestType:(unsigned long long)a0 responseModel:(id)a1;
- (void)requestRenderDataForColdLaunch;
- (void)p_updateRenderDataWithRequestType:(unsigned long long)a0 canHotReload:(BOOL)a1;
- (void)p_callAccountChangeTabsReloadWithReloadType:(unsigned long long)a0 subType:(id)a1;
- (void).cxx_destruct;

@end
