@class NSString, AWEAwemeModel, AWEFeedCellViewController, UIView, UIViewController;
@protocol UIScrollViewDelegate, AWECommerceSplashStyleViewProtocol;

@interface AWEAwesomeBiddingSplashFeedCell : UITableViewCell <AWECommerceSplashStyleViewDelegate, AWEPlayVideoMessage, AWEFeedTableViewCellProtocol, AWEAwesomeSplashFeedCellProtocol>

@property (retain, nonatomic) AWEFeedCellViewController *viewController;
@property (retain, nonatomic) UIView<AWECommerceSplashStyleViewProtocol> *splashStyleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)a0;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)isViewerListShowing;
- (void)p_prepareForDisplay;
- (void)configWithModel:(id)a0;
- (void)resetRefreshFlag;
- (void)removeCellChildVCForMemoryOpt;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLynxLearnMoreViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNativeLearnMoreViewFrame;
- (void)storeLastClickPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)trackInvalidClick:(id)a0;
- (void)openLandingPageIfNeeded:(id)a0 animationType:(long long)a1;
- (void)onSkipButtonClick;
- (void)onBackgroundViewTapped:(id)a0;
- (id)getContainerView;
- (void)trackShowFailedWithReason:(long long)a0;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)setupSplashStyleViewWithModel:(id)a0;
- (void)trackComplianceAdClickWithParam:(id)a0;
- (void)requestQcpxIfNeeded;
- (void)setupAppearence;
- (BOOL)fakeViewRemoveOptimize;
- (void)hideSplashStyleView;
- (void)showWIFIAlertIfNeeded;
- (BOOL)isCommentPanelShowing;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stop;
- (void)reset;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)configureWithModel:(id)a0;
- (void)willDisplay;

@end
