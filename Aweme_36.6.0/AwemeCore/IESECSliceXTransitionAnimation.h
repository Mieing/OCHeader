@interface IESECSliceXTransitionAnimation : NSObject

@property (copy, nonatomic) id /* block */ animationTask;
@property (readonly, nonatomic) unsigned long long transitionProperty;
@property (readonly, nonatomic) double transitionDuration;
@property (readonly, nonatomic) unsigned long long transitionTimingFunction;
@property (readonly, nonatomic) double transitionDelay;

- (void)removeAnimationTask;
- (id)initWithProperty:(id)a0 duration:(double)a1 timingFunction:(id)a2 delay:(double)a3;
- (void)bindAnimationTask:(id /* block */)a0;
- (void).cxx_destruct;

@end
