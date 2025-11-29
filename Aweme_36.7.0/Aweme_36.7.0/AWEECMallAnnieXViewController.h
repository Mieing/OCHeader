@class AWECMallHybridFailureView, NSString, IESECMallLynxRenderMonitor, IESECRefreshHeaderView, UIView, UIScrollView, AWEECMultiMallContainerConfig;
@protocol IESHYContainerProtocol, AWEECGeneralMallViewControllerProtocol, IESECUILoadingViewProtocol, AnnieXLiveCardModelProtocol;

@interface AWEECMallAnnieXViewController : UIViewController <IESHYHybridViewLifecycleProtocol, IESECMallLynxRenderMonitorDelegate, AWEECMultiMallChannelContainerProtocol>

@property (retain, nonatomic) AWEECMultiMallContainerConfig *config;
@property (copy, nonatomic) NSString *openTime;
@property (nonatomic) BOOL isViewVisible;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isLoadedSuccesses;
@property (nonatomic) BOOL needReloadErrorScene;
@property (retain, nonatomic) id<AnnieXLiveCardModelProtocol> cardModel;
@property (retain, nonatomic) IESECMallLynxRenderMonitor *lynxRenderMonitor;
@property (weak, nonatomic) id<AWEECGeneralMallViewControllerProtocol> delegate;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWECMallHybridFailureView *failureView;
@property (weak, nonatomic) UIScrollView *webScrollView;
@property (retain, nonatomic) IESECRefreshHeaderView *refreshHeader;
@property (copy, nonatomic) id /* block */ refreshCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)globalProps;
- (void)dismissLoadingView;
- (void)beginRefresh;
- (void)loadLynxView;
- (void)updateMallConfig:(id)a0;
- (void)enterChannelWithModel:(id)a0;
- (void)leaveChannelWithModel:(id)a0;
- (BOOL)isContainerVisible;
- (void)refreshChannelIfNeededWithCompletion:(id /* block */)a0 withActively:(BOOL)a1;
- (void)registerBridge;
- (void)recreateContainer;
- (void)dismissFailureView;
- (void)trackAnnieLoadStatus:(long long)a0 scene:(id)a1;
- (id)getBGColorForMix;
- (void)endRefresh;
- (void)releaseContainer;
- (id)multiMallContext;
- (id)getInitialURLString;
- (void)showFailureView;
- (void)mallLynxRenderReport:(id)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)pageUrl;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)showLoadingView;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
