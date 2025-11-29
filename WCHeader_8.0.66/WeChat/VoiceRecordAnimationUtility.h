@interface VoiceRecordAnimationUtility : NSObject

+ (id)getBasicAnimation:(id)a0 fromValue:(id)a1 toValue:(id)a2 duration:(double)a3 timingFuction:(id)a4;
+ (id)getPathAnimationWithFromPath:(id)a0 toPath:(id)a1 duration:(double)a2 timingFunction:(id)a3;
+ (id)getOpacityAnimationFromValue:(double)a0 toValue:(double)a1 duration:(double)a2 timingFunction:(id)a3;
+ (id)getPositionAnimationFromValue:(struct CGPoint { double x0; double x1; })a0 toValue:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2 timingFunction:(id)a3;
+ (id)getAnimationGroupFromAnimations:(id)a0 duration:(double)a1;

@end
