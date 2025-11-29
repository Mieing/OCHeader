@class AWEHPRenderResponseModel, NSString, AWEHPTopTabConfigModel, AWEHPBottomTabConfigModel, AWEHomePageContext;
@protocol AWEHPChannelDataManagerDelegate, AWEHPDefaultTabFactoryProtocol;

@interface AWEHPChannelDataManager : NSObject

@property (nonatomic) BOOL isServerTab;
@property (retain, nonatomic) AWEHPRenderResponseModel *renderModel;
@property (retain, nonatomic) AWEHPBottomTabConfigModel *bottomTab;
@property (retain, nonatomic) AWEHPTopTabConfigModel *topTab;
@property (copy, nonatomic) NSString *rightFirstEntrance;
@property (retain, nonatomic) AWEHomePageContext *context;
@property (copy, nonatomic) NSString *currentUserID;
@property (nonatomic) long long requestionSession;
@property (retain, nonatomic) id<AWEHPDefaultTabFactoryProtocol> defaultManager;
@property (nonatomic) BOOL homePageContextEnable;
@property (weak, nonatomic) id<AWEHPChannelDataManagerDelegate> delegate;

+ (id)sharedInstance;

- (void)loadCacheData;
- (BOOL)p_getRenderResponse:(id *)a0;
- (id)p_createHomePageContext;
- (BOOL)getServerEnable;
- (void)p_requestWithType:(unsigned long long)a0 canHotReload:(BOOL)a1 editModel:(id)a2 completion:(id /* block */)a3;
- (BOOL)isRenderRequesting;
- (BOOL)p_rightEntranceChangedWithTopTab:(id)a0;
- (BOOL)p_allowBottomTabHotReloadWithNewBottomTabList:(id)a0 oldBottomTabList:(id)a1;
- (void)reloadHomePageContextWithBottomTab:(id)a0 topTab:(id)a1;
- (void)p_retryRequestRenderDataWithRequestType:(unsigned long long)a0 canHotReload:(BOOL)a1;
- (id)createPageContextNodeWithBottomTab:(id)a0;
- (id)createPageContextNodeWithTopTab:(id)a0;
- (id)createPageContextNodeWithXTabChannelInfo:(id)a0;
- (void)reloadHomePageContextWithTopTab:(id)a0;
- (void)tryHotReloadForAccountChangedWithOldRenderModel:(id)a0 reloadType:(unsigned long long)a1 subType:(id)a2;
- (BOOL)p_getRenderResponseForAccountChanged:(id *)a0 oldResponse:(id)a1;
- (void)p_reloadTabsWithReloadType:(id)a0 isServerTab:(BOOL)a1 renderResponse:(id)a2 allowReloadBottomTab:(BOOL)a3;
- (long long)p_checkHotReloadForNewAccountWithBottomTab:(id)a0 topTab:(id)a1;
- (long long)p_allowHotReloadWhenSplash;
- (long long)p_checkHotReloadEnableForEnvironmentWithRequestType:(unsigned long long)a0;
- (void)p_trackHotSwitchWithStatus:(long long)a0 requestType:(unsigned long long)a1;
- (long long)p_checkHotReloadForDataWithBottom:(id)a0 topTab:(id)a1;
- (void)requestRenderDataForColdLaunch;
- (void)reqeustRenderDataForEdit:(id)a0;
- (void)retryRequestRenderDataForHotLaunch;
- (void)retryRequestRenderDataForConnection;
- (void)requestRenderDataForAccountChangedWithReloadType:(unsigned long long)a0 subType:(id)a1;
- (void)tryHotReloadForNetworkResponseWithRequestType:(unsigned long long)a0 responseModel:(id)a1;
- (void).cxx_destruct;

@end
