@class WCFinderFeedDetailContentView, NSString, WCFinderFeedContentVM, UIView;
@protocol WCFinderFeedDetailFullScreenVideoViewControllerDelegate;

@interface WCFinderFeedDetailFullScreenVideoViewController : MMUIViewController <WCFinderFeedDetailContentViewDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderFeedDetailContentView *mediaContentView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL rotating;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPoint;
@property (nonatomic) BOOL isPullingDown;
@property (nonatomic) BOOL isViewWillAppear;
@property (weak, nonatomic) id<WCFinderFeedDetailFullScreenVideoViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (id)initWithContentVM:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)DismissMyselfAnimated:(BOOL)a0;
- (void)setupSubviews;
- (void)layoutViews;
- (void)setupGestures;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaViewFullScreenFrame;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)handlePan:(id)a0;
- (void)restorePullingDownWithDuration:(double)a0;
- (id)feedDetailContentViewCurrentViewController;
- (void)onFeedDetailContentViewClickPhotoImageWithIndex:(unsigned long long)a0;
- (void)onFeedDetailContentViewClickPlayerFullScreen;
- (void)onFeedDetailContentViewVideoExitFullScreen;
- (void)onFeedDetailContentViewVideoExitIPhoneLandscape;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
