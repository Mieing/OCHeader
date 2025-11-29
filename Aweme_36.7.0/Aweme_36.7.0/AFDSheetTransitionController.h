@class UIViewController, NSString, UIScrollView, UIView, UIPanGestureRecognizer;

@interface AFDSheetTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *interactiveDismissPanGesture;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL isPresenting;
@property (nonatomic) double percent;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationCurve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_stopAnimations:(id)a0;

- (void)p_panGesture:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end
