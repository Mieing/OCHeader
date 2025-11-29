@class NSString, IESLiveActionSheetPresentAnimator, UIPanGestureRecognizer, UIViewController;

@interface IESLiveActionSheetPresentViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) IESLiveActionSheetPresentAnimator *animator;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIPanGestureRecognizer *hideGesture;
@property (nonatomic) BOOL useAutoLayout;
@property (copy, nonatomic) id /* block */ beginDismissHandler;
@property (copy, nonatomic) id /* block */ canDismissHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ presentHandler;
@property (nonatomic) BOOL enablePanDown;
@property (nonatomic) BOOL enableTimingFunction;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundViewHidden:(BOOL)a0;
- (id)initWithViewController:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 backgroundView:(id)a2 landscape:(BOOL)a3;
- (id)initWithView:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 backgroundView:(id)a2 landscape:(BOOL)a3;
- (void)addHideGestureForView:(id)a0;
- (id)initWithView:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1 backgroundView:(id)a2;
- (void)showBackAfterPan;
- (id)initWithView:(id)a0 backgroundView:(id)a1 landscape:(BOOL)a2;
- (void)removeHidePanGesture;
- (id)transitioningDelegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)modalPresentationStyle;
- (BOOL)shouldAutorotate;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)a0;
- (void)pan:(id)a0;
- (void)viewDidLoad;

@end
