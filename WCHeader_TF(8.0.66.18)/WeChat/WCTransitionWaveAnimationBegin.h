@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface WCTransitionWaveAnimationBegin : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>

@property (nonatomic) struct CGPoint { double x; double y; } originPoint;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationOrigin:(struct CGPoint { double x0; double x1; })a0;

@end
