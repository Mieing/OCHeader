@class NSString, CALayer;

@interface WCLiveBlurButtonAnimationHandler : NSObject <CAAnimationDelegate>

@property (retain, nonatomic) NSString *currentAnimationKey;
@property (weak, nonatomic) CALayer *animationLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startEnlargeReduceAnimation:(unsigned int)a0;
- (void)startEnlargeReduceAnimation;
- (void)startEnLargeAnimation:(id)a0;
- (void)startReduceAnimation:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
