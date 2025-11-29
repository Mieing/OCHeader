@interface WCSplitPropertyAnimator : UIViewPropertyAnimator

@property (copy, nonatomic) id /* block */ animation;
@property (copy, nonatomic) id /* block */ complete;

- (void)startWithoutAnimation;
- (void)startAnimation;
- (void)addAnimations:(id /* block */)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
