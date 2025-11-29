@class UIStackView, NSString, NSURL, BDASifSchemaParam, UIView, BDASifContainerLifecycle, BDXView, BDASifConfiguration, BDASifPopupHeaderView;
@protocol BDASifLifecycleDelegate, BDXKitViewProtocol, BDXPopupContainerProtocol;

@interface BDASifPopupContentView : UIView <BDXContainerLifecycleProtocol, BDXPopupContentProtocol, BDXPopupEventProtocol, BDASifLifecycleDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *closeIndicator;
@property (retain, nonatomic) BDASifPopupHeaderView *headerView;
@property (retain, nonatomic) BDXView *bdxView;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) BDASifSchemaParam *sifSchemaParam;
@property (nonatomic) BOOL isContainerReady;
@property (readonly, nonatomic) NSURL *originURL;
@property (nonatomic) long long bdxContentMode;
@property (readonly, nonatomic) long long viewType;
@property (retain, nonatomic) id config;
@property (readonly, nonatomic) UIView<BDXKitViewProtocol> *kitView;
@property (retain, nonatomic) BDASifConfiguration *sifConfig;
@property (retain, nonatomic) BDASifContainerLifecycle *sifLifecycle;
@property (weak, nonatomic) id<BDASifLifecycleDelegate> sifLifecycleDelegate;
@property (weak, nonatomic) id<BDXPopupContainerProtocol> popupViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)registerXBridgeMethod:(id)a0;
- (void)loadWithParam:(id)a0 context:(id)a1;
- (void)addLifeCycleDelegate:(id)a0;
- (void)handleViewDidAppear;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (BOOL)shouldShowLoadFailedViewWithError:(id)a0;
- (void)loadWithURL:(id)a0 context:(id)a1;
- (void)addCloseIndicator:(id)a0;
- (void)handleTapOnMask;
- (void)popupDidChangeToStatus:(long long)a0 withContainer:(id)a1;
- (void)makeConstraints;
- (void)updateSchemaConfig:(id)a0;
- (void)updateSifconfig:(id)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)reload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)reloadWithContext:(id)a0;
- (void)handleViewDidDisappear;

@end
