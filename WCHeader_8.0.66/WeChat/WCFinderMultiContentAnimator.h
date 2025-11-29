@class NSString, WCFinderTransitionUserInfo;

@interface WCFinderMultiContentAnimator : NSObject <WCFinderTrailingAnimator>

@property (retain, nonatomic) WCFinderTransitionUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)chooseAnimatorWithOther:(id /* block */)a0 context:(id)a1;
- (void)startAnimation:(id)a0 withoutAnimationBlockComplete:(id /* block */)a1;
- (void)closeDirectlyWithAnimated:(BOOL)a0;
- (void)onAnimationPrepare:(long long)a0 userInfo:(id)a1;
- (void)onAnimationCleanUp;
- (void).cxx_destruct;

@end
