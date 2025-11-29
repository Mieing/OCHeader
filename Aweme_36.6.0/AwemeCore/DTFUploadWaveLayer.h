@class CADisplayLink, CALayer, CAShapeLayer;

@interface DTFUploadWaveLayer : CALayer

@property (retain, nonatomic) CAShapeLayer *sinWaveLayer;
@property (retain, nonatomic) CAShapeLayer *cosWaveLayer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double waveFrequency;
@property (nonatomic) double waveHeight;
@property (nonatomic) double waveWidth;
@property (nonatomic) double waveMid;
@property (nonatomic) double wavePhase;
@property (nonatomic) double wavePhaseShift;
@property (nonatomic) double waveMaxAmplitude;
@property (retain, nonatomic) CALayer *backgroundImageLayer;

- (void)updateWave:(long long)a0;
- (void)_buildWaveView;
- (void)startWave;
- (void)stopWave;
- (id)createWavePathWithType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMaskImage:(id)a0;

@end
