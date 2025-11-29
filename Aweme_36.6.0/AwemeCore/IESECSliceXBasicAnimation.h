@interface IESECSliceXBasicAnimation : NSObject

+ (id)getAnimationContextWithKey:(id)a0 elementView:(id)a1;
+ (BOOL)animationsStillExistedOnElementView:(id)a0 animationKey:(id)a1;
+ (void)recordBasicAnimations:(id)a0 onElementView:(id)a1 animationKey:(id)a2;
+ (void)animateWithElementView:(id)a0 config:(id)a1 fromValuesBlock:(id /* block */)a2 toValuesBlock:(id /* block */)a3 startBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
+ (void)initialize;

@end
