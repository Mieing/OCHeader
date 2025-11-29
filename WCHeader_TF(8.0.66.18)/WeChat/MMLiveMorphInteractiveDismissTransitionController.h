@class NSString, UIScreenEdgePanGestureRecognizer, MMLiveMorphInteractiveDismissTransitionAnimator, UIPanGestureRecognizer, UIViewController;
@protocol MMLiveMorphInteractiveDismissTransitionControllerDelegate;

@interface MMLiveMorphInteractiveDismissTransitionController : NSObject <UIGestureRecognizerDelegate, MMLiveMorphInteractiveDismissTransitionAnimatorDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) MMLiveMorphInteractiveDismissTransitionAnimator *animator;
@property (weak, nonatomic) id<MMLiveMorphInteractiveDismissTransitionControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)installGestureRecognizer:(id)a0;
- (void)handleGesture:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)dismissParametersForCurrentContext;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)supportSwipeEdge;
- (BOOL)supportSwipeBottomToTop;
- (BOOL)supportSwipeTopToBottom;
- (BOOL)supportSwipeLeftToRight;
- (BOOL)enableGesture;
- (void)onInteractiveDismissTransitionEnd:(BOOL)a0 direction:(unsigned long long)a1;
- (void).cxx_destruct;

@end
