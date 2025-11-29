@class NSString, UIView;

@interface WCFinderCommentImagesBrowseTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startingFrame;
@property (nonatomic) BOOL isDismissing;
@property (weak, nonatomic) UIView *startView;
@property (nonatomic) BOOL notTriggerParentVCLifeCycleFunc;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) BOOL showStartViewNow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)willCloseToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showStartViewNow:(BOOL)a1 fromVC:(id)a2;
- (void).cxx_destruct;

@end
