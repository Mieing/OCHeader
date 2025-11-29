@class CJPayDismissAnimator, CJPayPopAnimator, CJPayPushAnimator, CJPayNavigationController, NSString, CJPayPresentAnimator;

@interface CJPayTransitionManager : NSObject <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) CJPayNavigationController *navi;
@property (retain, nonatomic) CJPayPresentAnimator *presentAnimator;
@property (retain, nonatomic) CJPayDismissAnimator *dismissAnimator;
@property (retain, nonatomic) CJPayPushAnimator *pushAnimator;
@property (retain, nonatomic) CJPayPopAnimator *popAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionManagerWithNavi:(id)a0;
+ (id)shared;

- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)handleGesture:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;

@end
