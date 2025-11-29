@class RxDeferred, NSMutableArray, NSString;
@protocol RxInjector;

@interface __RTVViewAnimator : NSObject <RTVViewAnimator>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSMutableArray *animationBlocks;
@property (retain, nonatomic) RxDeferred *completionDeferred;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) long long timingFunction;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL fps60;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)timingFunctionWithTimingFunction:(long long)a0;
- (id)updateTimingFunction:(long long)a0;
- (id)updateDelay:(double)a0;
- (id)enable60FPSAnimation;
- (id)completionPromise;
- (void)__performAnimationAction;
- (void)__performCompletionActionWithFinish:(BOOL)a0;
- (id)startAnimation;
- (void).cxx_destruct;
- (id)addCompletion:(id /* block */)a0;
- (id)updateOptions:(unsigned long long)a0;
- (double)animationDuration;
- (id)__startAnimation;
- (id)addAnimation:(id /* block */)a0;
- (id)updateDuration:(double)a0;

@end
