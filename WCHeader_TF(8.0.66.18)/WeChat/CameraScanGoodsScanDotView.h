@class NSString, CAAnimationGroup;

@interface CameraScanGoodsScanDotView : MMUIView <CAAnimationDelegate> {
    CAAnimationGroup *_groupAnimation;
}

@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startAnimation;
- (void)stopAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
