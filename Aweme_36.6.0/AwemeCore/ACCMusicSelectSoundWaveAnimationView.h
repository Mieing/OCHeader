@class UIColor, NSMutableArray;

@interface ACCMusicSelectSoundWaveAnimationView : UIView

@property (retain, nonatomic) NSMutableArray *animationlayers;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double gapWidth;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCount;
@property (retain, nonatomic) UIColor *waveColor;

- (id)initWithLineWidth:(double)a0 LineCount:(int)a1 gapWidth:(int)a2 waveColor:(id)a3;
- (double)p_getHeightFromValueWithIndex:(long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)setupUI;

@end
