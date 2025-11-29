@class NSString, UIImageView, UIView, IESVSFinishViewModel, UIButton;
@protocol IESLiveAudienceRoomAwareness, IESLiveWebViewService, IESHYContainerProtocol, HTSLiveAudienceActions, IESLiveWebViewProtocol, IESLiveInternalRouter, IESLiveFeedDrawerProviderAdapter, IESLiveReference;

@interface IESVSFinishViewController : UIViewController <IESVSSlideVCStateChangeAction, UIGestureRecognizerDelegate, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIView<IESLiveWebViewProtocol> *webView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESVSFinishViewModel *viewModel;
@property (nonatomic) BOOL statusHidden;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL isMergeRoom;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (retain, nonatomic) id<IESLiveFeedDrawerProviderAdapter> feedDrawerProvider;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveReference> reference;
@property (retain, nonatomic) id<HTSLiveAudienceActions> audienceActionCreator;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) id /* block */ didShowNewLiveRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)closeVC;
- (void)setupCloseButton;
- (id)initWithFinishModel:(id)a0;
- (void)onSlideVCSlideStateChanged:(long long)a0;
- (void)setupHybridView;
- (void)onSlideVCRefreshStateChanged:(long long)a0;
- (void)popOut;
- (void)setupHybridContainerWithUrl:(id)a0;
- (void)trackFinishFailWithReason:(id)a0 errorCode:(unsigned long long)a1;
- (void)traceFinishPageLoadV2WithEvent:(id)a0 errorCode:(long long)a1;
- (void)registBridgeMethodForKitView:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupBackgroundView;

@end
