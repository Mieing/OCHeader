@class NSString, UIViewPropertyAnimator, UIView, AWEDCFeedTransitionAnimatorContext;

@interface AWEDCFeedTransitionCommonAnimatorProvider : NSObject <AWEDCFeedTransitionProviderProtocol>

@property (retain, nonatomic) UIViewPropertyAnimator *enterAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *exitAnimator;
@property (retain, nonatomic) AWEDCFeedTransitionAnimatorContext *enterContext;
@property (retain, nonatomic) UIView *enterAnimationContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationViewOriginFrame;
@property (copy, nonatomic) id /* block */ enterAnimationCompletion;
@property (copy, nonatomic) id /* block */ enterAnimationWillBeginBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runEnterAnimation:(id)a0 completion:(id /* block */)a1;
- (void)runExitAnimation:(id)a0 completion:(id /* block */)a1;
- (void)manualContinueEnterAnimation;
- (void)cancelEnterAnimation;
- (void)startEnterAnimationWithCompletion:(id /* block */)a0;
- (void)cancelExitAnimation;
- (void).cxx_destruct;

@end
