@class NSString, UIImage, UIPercentDrivenInteractiveTransition, BDPTimorLaunchParam;
@protocol BDPNavigatingAnimationStore, UIViewControllerContextTransitioning;

@interface BDPNavigatingAnimation : NSObject <UINavigationControllerDelegate, CAAnimationDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> currentTransitionContext;
@property (retain, nonatomic) id<BDPNavigatingAnimationStore> store;
@property (nonatomic) BOOL screenEdgePopMode;
@property (nonatomic) BOOL interactionInProgress;
@property (nonatomic) long long style;
@property (nonatomic) long long operation;
@property (retain, nonatomic) BDPTimorLaunchParam *launchParam;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scaleTargetFrame;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (copy, nonatomic) NSString *businessSubId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchBackgroundView:(id)a0;
- (void)resetInteractive;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
