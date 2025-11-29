@class NSString, UIView;

@interface EmptyLottieAdapter : NSObject <LottieAdapterProtocol>

@property (readonly, nonatomic) BOOL isAnimationPlaying;
@property (nonatomic) BOOL loopAnimation;
@property (nonatomic) BOOL autoReverseAnimation;
@property (nonatomic) double animationProgress;
@property (nonatomic) double animationSpeed;
@property (readonly, nonatomic) double animationDuration;
@property (nonatomic) BOOL cacheEnable;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL shouldRasterizeWhenIdle;
@property (nonatomic) unsigned long long repeatCount;
@property (nonatomic) long long contentMode;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProgressWithFrame:(id)a0;
- (void)setAnimationNamed:(id)a0 inBundle:(id)a1;
- (void)setAnimationFromJSON:(id)a0;
- (id)createAdapter;
- (void)playToFrame:(id)a0 withCompletion:(id /* block */)a1;
- (void)playFromProgress:(double)a0 toProgress:(double)a1 withCompletion:(id /* block */)a2;
- (void)setAnimationFromJSON:(id)a0 inBundle:(id)a1;
- (void)setAnimationNamed:(id)a0;
- (void)playFromFrame:(id)a0 toFrame:(id)a1 withCompletion:(id /* block */)a2;
- (void)setProgressWithFrame:(id)a0 callCompletionIfNecessary:(BOOL)a1;
- (void)playToProgress:(double)a0 withCompletion:(id /* block */)a1;
- (void)forceDrawingUpdate;
- (id)createAdapterWithAnimationNamed:(id)a0;
- (id)createAdapterWithAnimationNamed:(id)a0 inBundle:(id)a1;
- (id)createAdapterWithJSON:(id)a0;
- (id)createAdapterWithJSON:(id)a0 inBundle:(id)a1;
- (id)createAdapterWithFilePath:(id)a0;
- (id)createAdapterWithURL:(id)a0;
- (void)play;
- (void)pause;
- (void)stop;
- (void)playWithCompletion:(id /* block */)a0;

@end
