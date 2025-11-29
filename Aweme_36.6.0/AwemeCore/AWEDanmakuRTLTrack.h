@protocol DDanmakuItemViewDelegate, DDanmakuRTLTrackAdapterProtocol;

@interface AWEDanmakuRTLTrack : DDanmakuBaseTrack <DDanmakuRTLTrackProtocol>

@property (weak, nonatomic) id<DDanmakuItemViewDelegate> itemViewDelegate;
@property (nonatomic) double danmakuHorizontalMargin;
@property (retain, nonatomic) id<DDanmakuRTLTrackAdapterProtocol> adapter;
@property (nonatomic) double danmakuLifeTime;

- (void)layoutDidChanged;
- (long long)checkDanmakuAddOption:(id)a0 currentSpace:(double *)a1;
- (void)danmakuContentSizeDidChanged:(id)a0;
- (void)unloadDanmaku:(id)a0;
- (void)addDanmaku:(id)a0;
- (void)applyNewLifeTimeWithFactor:(double)a0;
- (void)relayoutDisplayingDanmakus;
- (BOOL)isDanmaku:(id)a0 canOverTakeDanmaku:(id)a1;
- (void)adjustDanmakuPositionIfNeededBetweenPrevious:(id)a0 current:(id)a1;
- (double)minimumSpacingFor:(id)a0 chasingDanmaku:(id)a1;
- (double)spacingBetweenPreviousDanmaku:(id)a0 chasingDanmaku:(id)a1;
- (BOOL)canAddDanmaku:(id)a0;
- (id)findLastRunningDanmaku;
- (double)calculateSpeedForDanmaku:(id)a0;
- (double)caculateDanmakuRemainLifeTime:(id)a0;
- (double)calculateLifeTimeForDanmakuDescriptor:(id)a0;
- (void)addDanmakuWithAdapter:(id)a0;
- (id)configDanmakuItemViewWithDescriptor:(id)a0;
- (void)updateDanmakuDescriptor:(id)a0;
- (void)removeAllDanmakus;
- (void)updateWithPassingTime:(double)a0;
- (void)setCanvas:(id)a0;
- (void).cxx_destruct;
- (id)trackType;
- (id)init;
- (double)length;
- (double)right;
- (void)setRenderContext:(id)a0;

@end
