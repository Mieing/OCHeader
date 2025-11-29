@class UIColor, NSArray, DVETrackPanelContext, NLETrackSlot_OC;

@interface DVEAudioWaveViewModel : NSObject

@property (retain, nonatomic) NSArray *audioSlots;
@property (retain, nonatomic) NLETrackSlot_OC *beatPointsTargetSlot;
@property (weak, nonatomic) DVETrackPanelContext *context;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } targetTimeRange;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) BOOL useContinuousWave;
@property (nonatomic) BOOL enableTargetTimeRangeMask;

+ (void)generateAudioWavePointsIfNeededWithAudioPath:(id)a0 audioDuration:(double)a1 audioWavePointsCacheKey:(id)a2 completion:(id /* block */)a3;

- (id)initWithContext:(id)a0 slots:(id)a1 beatPointsTargetSlot:(id)a2;
- (double)waveLayerDuration;
- (double)waveLayerStartSeconds;
- (id)beatPointInfo;
- (id)wavePointsCache;
- (void)generateWavePointsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
