@class NSString, IESECMallHybridChannelFailureView, NSTimer, UIView, IESECMallHybridChannelCardCellModel, IESECListKitItemDataModel;
@protocol IESHYContainerProtocol, IESECUILoadingViewProtocol;

@interface IESECMallHybridChannelCardCell : UICollectionViewCell <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) IESECMallHybridChannelFailureView *failureView;
@property (nonatomic) BOOL isLoadedSuccess;
@property (nonatomic) BOOL isJSReady;
@property (nonatomic) BOOL isFirstScreenCompleted;
@property (nonatomic) BOOL isViewVisible;
@property (nonatomic) BOOL lastViewWidth;
@property (nonatomic) BOOL lastViewHeight;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL needReloadErrorScene;
@property (copy, nonatomic) id /* block */ refreshCompletion;
@property (retain, nonatomic) NSTimer *refreshTimeoutTimer;
@property (retain, nonatomic) IESECMallHybridChannelCardCellModel *cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)visibleSourceStringWithType:(unsigned long long)a0;

- (void)viewDidConstructJSRuntime:(id)a0;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)triggerLayout;
- (void)dismissLoadingView;
- (void)viewDidDisappear:(id)a0 sourceType:(unsigned long long)a1;
- (void)viewDidAppear:(id)a0 sourceType:(unsigned long long)a1;
- (void)loadLynxView;
- (void)registerBridge;
- (void)dismissFailureView;
- (id)getInitialURLString;
- (void)showFailureView;
- (void)trackEndRefreshTimeout;
- (void)sendTabVisibilityChangeEvent:(BOOL)a0 source:(id)a1;
- (void)updateBorderRadius;
- (void)cancelTimeoutTimer;
- (void)destroyHybridContainer;
- (void)setupHybridContainer;
- (id)getTabID;
- (void)trackEnbRefreshTemplateErr;
- (void)updateCellWith:(id)a0 bffItemData:(id)a1;
- (void)beginRefreshCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showLoadingView;
- (void)createContainer;

@end
