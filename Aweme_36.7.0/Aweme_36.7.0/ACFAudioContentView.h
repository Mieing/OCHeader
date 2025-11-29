@class CAGradientLayer, ACFAudioShapeView, NSArray, UIColor, UILabel, CALayer;

@interface ACFAudioContentView : UIView

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CAGradientLayer *cursorLayer;
@property (retain, nonatomic) ACFAudioShapeView *backPathView;
@property (retain, nonatomic) ACFAudioShapeView *forePathView;
@property (retain, nonatomic) CALayer *foreMaskLayer;
@property (retain, nonatomic) CALayer *backMaskLayer;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSArray *averagePowerArr;
@property (nonatomic) struct CGSize { double width; double height; } pathSize;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double audioMaxHeight;
@property (nonatomic) double spaceBetweenWaves;
@property (nonatomic) double pathWidth;
@property (nonatomic) double timeLabelHeight;
@property (nonatomic) double audioWaveLeftPadding;
@property (nonatomic) double labelFontSize;
@property (nonatomic) double cursorLayerWidth;
@property (nonatomic) double cursorLayerHeight;
@property (retain, nonatomic) UIColor *loadingLayerColor;
@property (nonatomic) BOOL isBGColorWhite;

- (void)refreshPlayAudioWithCurrentTime:(double)a0;
- (void)updateAudioContentViewState:(unsigned long long)a0;
- (double)calculateTimeLabelWidth;
- (void)configWithWaveArr:(id)a0 duration:(double)a1;
- (void)updateLayerWithCursorX:(double)a0;
- (id)timeTextFromTimes:(double)a0;
- (struct CGSize { double x0; double x1; })audioWavePathSizeWithAverageWaveArr:(id)a0 duration:(long long)a1;
- (void)refreshAudioUI;
- (id)audioWavePathWithWaveHeightArr:(id)a0;
- (long long)p_audioPowerCountWithPowerArr:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
