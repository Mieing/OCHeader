@class NSString;

@interface AWELiveLocalLifeExpoundCardContainerView : UIView <CAAnimationDelegate, AWELiveLocalLifeExpoundCardContainerViewDelegate>

@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)animationStatus;
- (void)showExpoundCardAnimationCompletion:(id /* block */)a0;
- (void)swithToNewExpoundCardAnimationWithUpdateModelBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismissExpoundCardAnimationCompletion:(id /* block */)a0;
- (void)changeAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
