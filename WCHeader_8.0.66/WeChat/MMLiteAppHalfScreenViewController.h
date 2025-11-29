@class UIColor, NSString, MMLiteAppViewController, UIView, UIPanGestureRecognizer;

@interface MMLiteAppHalfScreenViewController : MMUIHalfScreenViewController <UIGestureRecognizerDelegate> {
    double previousProgress;
    BOOL isFullScreen;
}

@property (retain, nonatomic) MMLiteAppViewController *liteappViewController;
@property (retain, nonatomic) UIPanGestureRecognizer *contentViewPanGesture;
@property (retain, nonatomic) UIView *safeAreaInsetsView;
@property (retain, nonatomic) UIColor *titleBgColor;
@property (retain, nonatomic) UIColor *darkTitleBgColor;
@property (nonatomic) double initContentTop;
@property (nonatomic) double heightPercent;
@property (nonatomic) BOOL enablePullUp;
@property (nonatomic) BOOL enablePullDown;
@property (nonatomic) BOOL enableFullscreenPullDown;
@property (nonatomic) BOOL hideWhenPullDown;
@property (nonatomic) BOOL withMask;
@property (nonatomic) BOOL landscape;
@property (nonatomic) BOOL autoRotate;
@property (nonatomic) BOOL fullscreenEnter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0 path:(id)a1 page:(id)a2 query:(id)a3 signatureKey:(id)a4 isTransparent:(BOOL)a5 startReport:(id)a6 reporter:(id)a7;
- (id)initWithParams:(id)a0;
- (void)commonInit;
- (void)viewDidLoad;
- (double)getMaxHalfScreenHeight;
- (void)viewWillPopOrDismiss:(BOOL)a0;
- (BOOL)shouldChangeDetailScrollViewHeightWhileScrolling;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)doClickCloseWithNeedAnimated:(BOOL)a0 action:(long long)a1;
- (void)updateCanvasView;
- (void)initPanGesture;
- (void)handlePanGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (id)getHalfDismissTransition;
- (void)contentTopDidChangeFromTop:(double)a0 toTop:(double)a1;
- (double)fetchHalfScreenPageHeight;
- (BOOL)isPanVerticalGesture:(id)a0;
- (BOOL)isPanUpGesture:(id)a0;
- (double)getContentViewTop;
- (void)setContentViewTopTo:(double)a0 animatedWithDuration:(double)a1;
- (void)animationToTargetFromRight:(double)a0 action:(id)a1;
- (void)animationToTarget:(double)a0 action:(id)a1;
- (void)scrollToTop;
- (void)scrollToBottom;
- (void)innerScrollToBottom;
- (void)scrollToResume;
- (id)backgroundButton;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetHalfScreenView:(BOOL)a0;
- (void)updateByLandscape;
- (double)marginLeft;
- (void)updateSafeAreaInsetsView:(struct CGSize { double x0; double x1; })a0;
- (void)setTitleBackgroundColor:(unsigned long long)a0 darkMode:(BOOL)a1 pageId:(unsigned long long)a2;
- (BOOL)darkMode;
- (void)updateDarkMode:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)start;
- (void)handleEdgePan:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
