@class NSTimer;

@interface AWELivePreStreamPullStreamElement : AWELiveBusinessBaseElement

@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL hadCollectionStrategyInfo;
@property (retain, nonatomic) NSTimer *demandCheckTimer;

- (void)preloadWithModel:(id)a0;
- (void)resetPreload;
- (void)prepareForDisPlay;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (void)preloadStreamABTestAI:(id)a0 preloadPull:(BOOL)a1 interval:(long long)a2 ignorePeakTime:(BOOL)a3;
- (void)preloadStreamABTestAIHotStart:(id)a0 interval:(long long)a1 ignorePeakTime:(BOOL)a2;
- (void)preloadStreamAIStop:(id)a0;
- (BOOL)isEcomCart:(id)a0;
- (id)wormholeConfig;
- (void)collectStrategyInfo:(id)a0;
- (void)preloadStreamABTestStrategy:(id)a0;
- (void)bandWidthOptPreloadStreamIsAiPreload:(BOOL)a0 interval:(long long)a1;
- (void)trackPreloadStreamWithType:(id)a0;
- (void)trackDemandLevel:(long long)a0 checkCount:(long long)a1 isHitLimit:(long long)a2;
- (void)invalidateDemandCheckTimer;
- (void)addRealTimeFeature:(id)a0 liveRoom:(id)a1;
- (unsigned long long)preStreamOrientation:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)dealloc;

@end
