@class NSString, AWEAwemeModel, UIView, AWEAwesomeSplashLiveCellAccessoryView, UIViewController;
@protocol AWECommerceSplashStyleViewProtocol, AWELiveBaseViewControllerProtocol, AWELiveSplashStreamViewProtocol;

@interface AWEAwesomeBiddingSplashLiveCell : AWEFeedLiveStreamTableViewCell <AWEAwesomeSplashLiveCellAccessoryViewDelegate, AWELivePreStreamLiveDelegate>

@property (readonly, nonatomic) UIViewController<AWELiveBaseViewControllerProtocol> *streamViewController;
@property (readonly, nonatomic) UIView<AWELiveSplashStreamViewProtocol> *streamView;
@property (retain, nonatomic) AWEAwesomeSplashLiveCellAccessoryView *liveCellAccessoryView;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) UIView<AWECommerceSplashStyleViewProtocol> *splashStyleView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (id)createCubicBezierAnimationWith:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLynxLearnMoreViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNativeLearnMoreViewFrame;
- (void)storeLastClickPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)trackInvalidClick:(id)a0;
- (void)openLandingPageIfNeeded:(id)a0 animationType:(long long)a1;
- (void)onSkipButtonClick;
- (void)onBackgroundViewTapped:(id)a0;
- (id)getContainerView;
- (void)trackShowFailedWithReason:(long long)a0;
- (void)onLivePlayerFirstFrameRender;
- (void)setupSplashStyleViewWithModel:(id)a0;
- (void)prepareForShowSplash;
- (void)showSplashStyleView;
- (void)showSplash;
- (id)awesomeBiddingSplashSharedManager;
- (void)resetSplashStyleView;
- (void)resetSplashLiveCellWithNeedShowSplash:(BOOL)a0;
- (void)trackLiveStatusWithEvent:(id)a0;
- (void)trackFirstView;
- (void)hiddenSplashImmediately;
- (void)hiddenSplashWithAnimation;
- (void)addEnterLiveBackgroundViewAnimation;
- (void)addEnterLiveViewAnimation;
- (void)addSkipAdLabelAnimation;
- (void)trackTopLiveWithLabel:(id)a0 refer:(id)a1 adExtraData:(id)a2;
- (void)addContentVCAnimationWitCompletion:(id /* block */)a0;
- (void)disableFullScreenPopTransitionWithEnable:(BOOL)a0;
- (void)hideLiveCellAccessoryViewFromSuperview;
- (void)layoutStreamViewWithFullScreen:(BOOL)a0;
- (void)updateStreamViewGradientContainerView:(BOOL)a0;
- (void)updateContentVCAccessoriesHidden:(BOOL)a0 animationDuration:(double)a1;
- (void)updateLiveCellEnterLiveBackgroundViewBackground;
- (void)showLiveCellAccessoryView;
- (struct CGPoint { double x0; double x1; })liveStatusViewLayerPosition;
- (id)liveStatusView;
- (void)hiddenSplashWithEnterLiveRoom;
- (void)trackComplianceAdClickWithParam:(id)a0;
- (void)requestQcpxIfNeeded;
- (void)clickSkipAdLabel;
- (void)clickEnterLiveView;
- (void)clickLiveCellAccessoryViewWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)reset;
- (void)setupSubviews;
- (void)configureWithModel:(id)a0;

@end
