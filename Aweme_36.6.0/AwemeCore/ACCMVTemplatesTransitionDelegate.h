@class UIPanGestureRecognizer, ACCZoomPopAnimator, NSString, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol ACCSlidePushContextProviderProtocol;

@interface ACCMVTemplatesTransitionDelegate : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) UIViewController<ACCSlidePushContextProviderProtocol> *viewController;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *percentDrivenTransition;
@property (retain, nonatomic) ACCZoomPopAnimator *popAnimator;
@property (nonatomic) unsigned long long triggerDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wireToViewController:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)handlePanGesture:(id)a0;

@end
