@class UIColor, NSString, UIScrollView, UIView, UIPanGestureRecognizer;

@interface AWEHalfScreenBaseViewController : UIViewController <IESIMHalfScreenViewControllerProtocol, AWEMRGlobalAlertTrackProtocol, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIView *containerView;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL onlyTopCornerClips;
@property (retain, nonatomic) UIScrollView *contentView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIColor *maskColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL disablePanGes;
@property (retain, nonatomic) UIColor *maskColor;
@property (nonatomic) BOOL useSmootherTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)messageReach_title;
- (void)showOnView:(id)a0;
- (void)selfPanned:(id)a0;
- (void)defaultShowAnimation;
- (id)aAWEPadBizUIAdapter;
- (void)transitionDismissWithAnimationStyle:(unsigned long long)a0;
- (void)presentViewController:(id /* block */)a0 shouldInfluenceBackgroundVCLifeCycle:(BOOL)a1;
- (void)fadeOutAnimation:(id /* block */)a0;
- (void)defaultHideAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)dismissWithDuration:(double)a0 afterDismissBlock:(id /* block */)a1;
- (void)slideDismiss;
- (void)tapDismiss;
- (void)presentOnViewController:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentViewController:(id /* block */)a0;
- (void)dismiss:(id /* block */)a0;
- (void)fadeInAnimation;

@end
