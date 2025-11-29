@class AWEECMallFullScreenViewController, NSString, NSTimer, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEECHalfMallViewController : UIViewController <AWEECFullScreenMallDelegate, UIGestureRecognizerDelegate>

@property (nonatomic) int pageType;
@property (nonatomic) BOOL upToFull;
@property (nonatomic) BOOL pullDownClose;
@property (nonatomic) double radius;
@property (nonatomic) double heightPercent;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initRect;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) AWEECMallFullScreenViewController *fullMallVC;
@property (nonatomic) double insideMarginTop;
@property (nonatomic) double contentOffsetY;
@property (nonatomic) double lastContentOffsetY;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (nonatomic) double kAnimationThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerSmallWindow;
- (void)toTargetFrame;
- (double)mallScrollTimeInterval;
- (void)sendFeedDidScrollEvent;
- (void)panOver:(id)a0;
- (void)dismissHalfMall;
- (void)toFullScreen;
- (BOOL)contentAtTop;
- (void)showLiveFloatWindow;
- (void)changeStatusBarStyle:(long long)a0;
- (void)hideLiveFloatWindow;
- (void)resetStatusBarStyle;
- (void)unregisterSmallWindow;
- (void)closeHalfMall;
- (double)mallContainerTopMargin;
- (BOOL)isHalfState;
- (id)mallBTMPageIdentifier;
- (void)muteLiveRoom:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
