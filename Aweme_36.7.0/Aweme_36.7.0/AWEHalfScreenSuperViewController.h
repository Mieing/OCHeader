@class UIColor, NSString, UIScrollView, UIPanGestureRecognizer, UIView;

@interface AWEHalfScreenSuperViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) BOOL isPresented;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL onlyTopCornerClips;
@property (nonatomic) BOOL isContentViewScroll;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL disablePanGes;
@property (nonatomic) BOOL disableDismissDuration;
@property (retain, nonatomic) UIColor *maskColor;
@property (nonatomic) BOOL useSmootherTransition;
@property (nonatomic) BOOL fullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)selfPanned:(id)a0;
- (void)defaultShowAnimation;
- (void)fadeOutAnimation:(id /* block */)a0;
- (void)defaultHideAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)dismissWithDuration:(double)a0 afterDismissBlock:(id /* block */)a1;
- (void)slideDismiss;
- (void)tapDismiss;
- (void)updateContainerViewHeight;
- (BOOL)canSupportScrollWithTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)presentOnViewController:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentViewController:(id /* block */)a0;
- (void)dismiss:(id /* block */)a0;
- (void)fadeInAnimation;

@end
