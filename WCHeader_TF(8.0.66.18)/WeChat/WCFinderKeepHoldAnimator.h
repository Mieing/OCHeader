@class WCFinderTransitionUserInfo, NSString, BTMinimizeAnimationView;

@interface WCFinderKeepHoldAnimator : NSObject <WCFinderTrailingAnimator>

@property (retain, nonatomic) BTMinimizeAnimationView *animationView;
@property (retain, nonatomic) WCFinderTransitionUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldForceNotStartAnimation;
- (void)startAnimation:(id)a0 withoutAnimationBlockComplete:(id /* block */)a1;
- (void)startAnimation:(id)a0;
- (void)onAnimationComplete:(BOOL)a0 context:(id)a1;
- (void)closeDirectlyWithAnimated:(BOOL)a0;
- (void)onAnimationPrepare:(long long)a0 userInfo:(id)a1;
- (void)onAnimationCleanUp;
- (id)chooseAnimatorWithOther:(id /* block */)a0 context:(id)a1;
- (void).cxx_destruct;

@end
