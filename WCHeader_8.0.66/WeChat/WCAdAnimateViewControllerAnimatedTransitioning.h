@class WCDataItem, NSString, PAGView, UIView;

@interface WCAdAnimateViewControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, PAGViewListener>

@property (nonatomic) BOOL isPresented;
@property (nonatomic) long long gestureType;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) UIView *originView;
@property (retain, nonatomic) PAGView *pagAnimationView;
@property (nonatomic) long long adTransitionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGestureType:(long long)a0 dataItem:(id)a1 originView:(id)a2;
- (void)updateTransitionTypeWithGestureType:(long long)a0 dataItem:(id)a1;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animationForPresentedView:(id)a0;
- (void)animationForDismissedView:(id)a0;
- (void)eggRandomSpriteAnimateTransition:(id)a0 fromView:(id)a1 toView:(id)a2 randomSprite:(id)a3;
- (void)eggPagThemeAnimateTransition:(id)a0 fromView:(id)a1 toView:(id)a2 pagThemeInfo:(id)a3;
- (id)fetchTransitionAnimationFilePathFromPagThemeInfo:(id)a0;
- (void)tryToPlayAnimationInView:(id)a0 pagThemeInfo:(id)a1;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void)cleanUpPagTransitionAnimation;
- (void).cxx_destruct;

@end
