@class UIView, DVEAudioWaveViewModel, DVEAudioWaveLayer;

@interface DVEAudioWaveView : UIView

@property (nonatomic) double waveLayerStartSeconds;
@property (nonatomic) double timeScale;
@property (nonatomic) BOOL showFeaturePoints;
@property (retain, nonatomic) DVEAudioWaveLayer *waveLayer;
@property (retain, nonatomic) UIView *leftUnvisibleView;
@property (retain, nonatomic) UIView *rightUnvisibleView;
@property (retain, nonatomic) DVEAudioWaveViewModel *waveModel;

+ (id)defaultAudioWavePointsForCount:(unsigned long long)a0;

- (void)startPositionChanged:(double)a0;
- (void)endPositionChanged:(double)a0;
- (id)generateAudioPointsInfosForAudioSlots:(id)a0;
- (void)showWithWaveModel:(id)a0 shouldShowAudioPoints:(BOOL)a1 timeScale:(double)a2 showFeaturePoints:(BOOL)a3;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)init;
- (void)clearData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
