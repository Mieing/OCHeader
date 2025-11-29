@class NSTimer, IESLiveDanmakuSpeedConfiguration, NSString;
@protocol IESLiveDanmakuSpeedChangedDelegate;

@interface IESLiveDanmakuSpeedManager : NSObject <IESLiveMessageInteractionStrategyResultSubscriber>

@property (retain, nonatomic) IESLiveDanmakuSpeedConfiguration *configuration;
@property (nonatomic) BOOL enableDynamicStrategy;
@property (nonatomic) double danmakuSpeed;
@property (nonatomic) long long danmakuSpeedStage;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<IESLiveDanmakuSpeedChangedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)setupDanmakuSpeedConfig;
- (void)setupDanmakuDynamicStrategy;
- (id)defaultFactors;
- (void)setupTimerForDynamicStrategy;
- (void)detectedStrategyEventWith:(id)a0 result:(long long)a1;
- (void)calculateDanmakuStrategyFactor;
- (void)decision:(id)a0 result:(id)a1;
- (void)strategyResultChange:(long long)a0 withStrategyKey:(id)a1 withChangeReason:(id)a2;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)stop;
- (void)dealloc;

@end
