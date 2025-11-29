@class NSDictionary, NSString, UIView;

@interface MMMusicViewControllerContainerTransitionContext : NSObject <UIViewControllerContextTransitioning>

@property (retain, nonatomic) NSDictionary *viewControllers;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } targetTransform;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFromVC:(id)a0 toVC:(id)a1;
- (id)viewControllerForKey:(id)a0;
- (id)viewForKey:(id)a0;
- (void)completeTransition:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void).cxx_destruct;

@end
