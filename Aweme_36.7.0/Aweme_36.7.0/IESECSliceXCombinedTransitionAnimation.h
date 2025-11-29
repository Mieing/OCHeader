@class IESECSliceXTransitionAnimation;

@interface IESECSliceXCombinedTransitionAnimation : NSObject

@property (readonly, nonatomic) IESECSliceXTransitionAnimation *opacityTranstion;
@property (readonly, nonatomic) IESECSliceXTransitionAnimation *colorTransition;
@property (readonly, nonatomic) IESECSliceXTransitionAnimation *translateTransition;

- (id)animationWithProperty:(unsigned long long)a0;
- (void)bindAnimationTaskWithProperty:(unsigned long long)a0 task:(id /* block */)a1;
- (id)validTransitionProperties;
- (id)initWithProperties:(id)a0 durations:(id)a1 timingFunctions:(id)a2 delays:(id)a3;
- (void).cxx_destruct;

@end
