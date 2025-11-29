@class UIViewPropertyAnimator, NSString;

@interface AFDMomentPopAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

@property (nonatomic) BOOL wantsInteractiveStart;
@property (retain, nonatomic) UIViewPropertyAnimator *interruptibleAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;

@end
