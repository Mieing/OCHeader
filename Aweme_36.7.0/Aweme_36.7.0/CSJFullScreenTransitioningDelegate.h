@class NSString, CSJMaterialMeta;

@interface CSJFullScreenTransitioningDelegate : NSObject <UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (nonatomic) struct CGSize { double width; double height; } adSize;
@property (retain, nonatomic) CSJMaterialMeta *material;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAdSize:(struct CGSize { double x0; double x1; })a0 materialMeta:(id)a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
