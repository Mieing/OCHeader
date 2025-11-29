@class NSString, NSDictionary, LLDitoMonitor, IESLLPOILoadingView, UIView;
@protocol BDXViewContainerProtocol;

@interface IESLLPOIUGCRateListViewController : UIViewController <LLDitoMonitorDelegateProtocol, IESLLPerfFMPCalculateDelegate, BDXContainerLifecycleProtocol, IESLLRouterViewControllerProtocol>

@property (nonatomic) BOOL didConfigWithRouterParams;
@property (copy, nonatomic) NSString *pageUniqueID;
@property (retain, nonatomic) IESLLPOILoadingView *loadingView;
@property (retain, nonatomic) UIView *loadingBgView;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSDictionary *ugcMobParams;
@property (copy, nonatomic) NSDictionary *loadingViewTrackParams;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) BOOL requestFailed;
@property (nonatomic) BOOL fmpCalculateStarted;
@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxContainer;
@property (copy, nonatomic) NSString *routeUrl;
@property (nonatomic) BOOL loadLynxUrlFromSetting;
@property (nonatomic) BOOL didLoadLynxSuccess;
@property (nonatomic) BOOL needUpdateAfterLoadLynx;
@property (nonatomic) double fmpStartTime;
@property (retain, nonatomic) LLDitoMonitor *monitor;
@property (copy, nonatomic) NSDictionary *responseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)requestData:(long long)a0;
- (void)userDidTakeScreenshot:(id)a0;
- (BOOL)isViewValid:(id)a0;
- (void)sendMainRequest;
- (id)requestCostParamsForResponse:(id)a0;
- (double)updatePadScreenWidthForSplitScreen:(struct { long long x0; long long x1; })a0;
- (double)updatePadScreenWidth:(struct { long long x0; long long x1; })a0;
- (id)initWithURL:(id)a0 configByParams:(BOOL)a1;
- (id)canShowRateDiggHintInLocal;
- (void)didLoadLynxUrl;
- (id)lynxTemplateUrl;
- (id)pageSceneName;
- (void)routeToLynxUrlWithModel:(id)a0;
- (id)rateListRouteUrlWithParams:(id)a0;
- (void)updateLoadingTrackParams;
- (void)setupLynxViewWithURL:(id)a0;
- (void)loadBDXContainerWithLynxUrl:(id)a0 params:(id)a1;
- (id)fetchTrackParams;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithURL:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)showLoadingView;
- (void)appDidEnterBackground;
- (void)hideLoadingView;

@end
