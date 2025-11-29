@class NSString, UIView;
@protocol IESECImagePreviewTargetProtocol, IESECImagePreviewTransitionContextProvider, UIViewControllerContextTransitioning;

@interface IESECImagePreviewInteractiveTransition : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL isInteracting;
@property (nonatomic) BOOL shouldComplete;
@property (nonatomic) BOOL setAnchorPositionOnce;
@property (weak, nonatomic) UIView *snapshot;
@property (nonatomic) struct CGPoint { double x; double y; } snapshotLayerPosition;
@property (nonatomic) BOOL defaultDismissAnimation;
@property (nonatomic) struct CGPoint { double x; double y; } animationFinalPoint;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } animationFinalTransform;
@property (copy, nonatomic) id /* block */ animation;
@property (copy, nonatomic) id /* block */ cancelRestore;
@property (weak, nonatomic) id<IESECImagePreviewTransitionContextProvider> contextProvider;
@property (weak, nonatomic) id<IESECImagePreviewTargetProtocol> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (BOOL)allowPanDismissAnimation;
- (void)finishInteractiveTransition;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)cancelInteractiveTransition;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)startInteractiveTransition:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)pan:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
