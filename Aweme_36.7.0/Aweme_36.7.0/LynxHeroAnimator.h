@class CADisplayLink;
@protocol LynxHeroAnimatorDelegate;

@interface LynxHeroAnimator : NSObject {
    CADisplayLink *_displayLink;
}

@property (weak, nonatomic) id<LynxHeroAnimatorDelegate> delegate;
@property (nonatomic) double timePassed;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isReversed;

- (void)startWithTimePassed:(double)a0 totalTime:(double)a1 isReversed:(BOOL)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)displayLinkCallback:(id)a0;

@end
