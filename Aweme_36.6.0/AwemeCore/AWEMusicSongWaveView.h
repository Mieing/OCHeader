@class UIColor, NSMutableArray;

@interface AWEMusicSongWaveView : UIView

@property (retain, nonatomic) NSMutableArray *animationlayers;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double gapWidth;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCount;
@property (retain, nonatomic) UIColor *waveColor;

- (void)awe_themeReload;
- (id)initWithLineWidth:(double)a0 LineCount:(int)a1;
- (void)p_refreshWaveColorIfNeeded;
- (double)p_getHeightFromValueWithIndex:(long long)a0;
- (double)p_getHeightToValueWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)layoutSubviews;
- (void)setupView;

@end
