@class NSString;

@interface AWEAlertPanelTransitionController : AWEPanelBaseTransitionController <UIGestureRecognizerDelegate>

@property (nonatomic) double presentationTransitionOffset;
@property (nonatomic) double dismissalTransitionOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)presentationControllerClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForPresentedViewController:(id)a0 transitionContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForPresentedViewController:(id)a0 transitionContext:(id)a1;
- (id)init;

@end
