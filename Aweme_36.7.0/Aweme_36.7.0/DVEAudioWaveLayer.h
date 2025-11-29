@class UIColor, NSArray, CAShapeLayer, DVETrackPanelContext, DVESingleAudioPointsInfo;

@interface DVEAudioWaveLayer : CALayer

@property (nonatomic) double margin;
@property (readonly, nonatomic) double extraWidth;
@property (readonly, nonatomic) double perFrame;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastCurrentTime;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSArray *signalDisposables;
@property (weak, nonatomic) DVETrackPanelContext *context;
@property (nonatomic) double timeScale;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;
@property (retain, nonatomic) NSArray *audioPointsInfos;
@property (retain, nonatomic) DVESingleAudioPointsInfo *beatPointsInfo;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) BOOL useContinuousWave;
@property (nonatomic) BOOL enableTargetTimeRangeMask;

+ (id)generateAudioPoints:(id)a0 payloadDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 speed:(double)a2;

- (BOOL)ifAudioPointsInfoAvailable:(id)a0;
- (BOOL)detectEdge;
- (id)slicePoints:(id)a0;
- (void)drawContinuousWaveLayersInLayer:(id)a0 audioPointsInfos:(id)a1 fillColor:(id)a2;
- (void)drawVolumeLayersInLayer:(id)a0 audioPointsInfos:(id)a1 fillColor:(id)a2;
- (void)drawBeatPointLayersInLayer:(id)a0 beatAudioInfo:(id)a1;
- (id)drawLineWithLineWidth:(double)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 strokeColor:(id)a3 fillColor:(id)a4;
- (id)drawBeatPointLineWithLineWidth:(double)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 strokeColor:(id)a3 fillColor:(id)a4;
- (void)updateLayersWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)refreshLayer;
- (void)startPositionChanged:(double)a0;
- (void)endPositionChanged:(double)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSublayers;
- (void)setupUI;
- (void)addObservers;

@end
