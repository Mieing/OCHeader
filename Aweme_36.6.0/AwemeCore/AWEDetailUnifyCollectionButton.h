@class NSString;

@interface AWEDetailUnifyCollectionButton : DUXButton <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ animateFinishblock;
@property (copy, nonatomic) id /* block */ firstTouchAnimationFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginFirstTouchAnimation;
- (void)beginSecondTouchAnimation;
- (void)beginTouchAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
