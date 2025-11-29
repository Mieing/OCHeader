@protocol IESLiveStrategyService;

@interface IESLiveRoomStrategyController : NSObject

@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;
@property (nonatomic) BOOL enableTopn;

- (unsigned long long)streamOrientation:(id)a0;
- (id)encodeStrategyInfo:(id)a0;
- (BOOL)isEcomCart:(id)a0;
- (void)collectStrategyInfo:(id)a0;
- (id)defaultFeatures;
- (void)addRealTimeFeature:(id)a0 roomModel:(id)a1;
- (long long)gameTagId:(id)a0;
- (BOOL)isBarrageGame:(id)a0;
- (int)barrageGameAnchor:(id)a0;
- (id)barrageGameAppid:(id)a0;
- (void)addItemExplicitInfo:(id)a0 roomModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
