@class NSDictionary, NSString, AWEMVChannelPageContext;
@protocol AWEMVLandingStrategyProtocol;

@interface AWEMVLandingController : AWEDCFeedBaseController <AWEMVDataPluginProtocol, AWEMVClientForceInsertStrategyProtocol, AWEMVLandingControllerProtocol>

@property (retain, nonatomic) NSDictionary *currentLandingParams;
@property (retain, nonatomic) id<AWEMVLandingStrategyProtocol> currentStrategy;
@property (nonatomic) BOOL isViewDidLoad;
@property (nonatomic) BOOL firstLoadNeedAppendData;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)landingWithParams:(id)a0;
- (void)containerBeforeViewDidLoad;
- (void)buildRequestParamsWithContext:(id)a0;
- (BOOL)shouldInterceptFetchWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)autoAttachToDataController:(id)a0;
- (id)forceInsertItemsWithContext:(id)a0;
- (void)handleLandingIfNeededWithParams:(id)a0;
- (void)preloadBannerCoverIfNeed;
- (BOOL)shouldDisableFirstRenderCache;
- (BOOL)needAppendDataModeWithRequestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void).cxx_destruct;
- (void)handleRefresh;
- (void)reset;
- (void)containerViewDidLoad;

@end
