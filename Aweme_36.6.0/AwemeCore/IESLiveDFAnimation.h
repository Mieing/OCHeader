@class NSString, IESLiveDFAnimationContext;
@protocol IESLiveDFAnimationDelegate;

@interface IESLiveDFAnimation : NSObject <IESLiveDFDisplayLinkAnimation>

@property (nonatomic) double lastPauseTime;
@property (readonly, nonatomic) IESLiveDFAnimationContext *context;
@property (weak, nonatomic) id owner;
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;
@property (nonatomic) long long frameRateType;
@property (weak, nonatomic) id<IESLiveDFAnimationDelegate> delegate;
@property (copy, nonatomic) id /* block */ didStartBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL enableImplicitAnimation;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long framesPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animation;

- (void)updateTime:(double)a0;
- (void)notificationStopWithFinished:(BOOL)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)prepare;
- (BOOL)disableAnimation;
- (void)resume;

@end
