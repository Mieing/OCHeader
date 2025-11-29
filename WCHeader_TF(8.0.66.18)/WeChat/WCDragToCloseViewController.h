@class NSString, UIView;

@interface WCDragToCloseViewController : MMUIViewController <WCDragToCloseDelegate, UIViewControllerAnimatedTransitioning, TransitioningAnimationDelegate>

@property (nonatomic) long long orientationWhenInit;
@property (nonatomic) BOOL enableDragToClose;
@property (retain, nonatomic) UIView *snapShotImgView;
@property (nonatomic) BOOL allowRotate;
@property (nonatomic) BOOL isNavigationBarHiddenInAnimiation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isOrientationChanged;
- (void)setM_snapShotImgView:(id)a0;
- (void)onFullScreenItemChangeAlpha:(double)a0;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (unsigned long long)supportedInterfaceOrientationsInDragScene;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animateTransition:(id)a0 fromVC:(id)a1 toVC:(id)a2 fromView:(id)a3 toView:(id)a4;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;

@end
