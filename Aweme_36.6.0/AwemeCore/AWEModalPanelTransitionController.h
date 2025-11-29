@class UIScrollView;

@interface AWEModalPanelTransitionController : AWEPanelTransitionController

@property (nonatomic) double lastOffset;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) BOOL useSmootherAnimationCurve;

- (void)presentedViewPanned:(id)a0;
- (void)finishInteractiveTransition;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;

@end
