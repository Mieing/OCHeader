@class IESLiveStableModeStrategy;
@protocol IESLivePerfSampler;

@interface IESLiveAnchorStableModeCommonStrategy : NSObject

@property (retain, nonatomic) IESLiveStableModeStrategy *effectLogStrategy;
@property (retain, nonatomic) IESLiveStableModeStrategy *bhvMonitorStrategy;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL isEffectLogStrategyEnable;
@property (nonatomic) BOOL isBHVMonitorStrategyEnable;
@property (nonatomic) BOOL isStableModeV2Enable;

- (void)registerCommonStrategy;
- (void)createStableModeEffectLogStrategy;
- (void)createStableModeBHVMonitorStrategy;
- (void)startEffectLogStrategy;
- (void)startBHVMonitorStrategy;
- (void)stopEffectLogStrategy;
- (void)stopBHVMonitorStrategy;
- (id)initWithStableModeV2Enable:(BOOL)a0;
- (void)startCommonStrategies;
- (void)stopCommonStrategies;
- (void).cxx_destruct;

@end
