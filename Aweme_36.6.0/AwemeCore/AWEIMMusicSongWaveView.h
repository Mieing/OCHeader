@class UIColor, NSMutableArray;

@interface AWEIMMusicSongWaveView : UIView

@property (retain, nonatomic) NSMutableArray *animationlayers;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) UIColor *waveColor;

- (void)p_refreshWaveColorIfNeeded;
- (double)p_getBarInitialHeightWithIndex:(long long)a0;
- (double)p_getBarHeightAnimationToValueWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setupView;

@end
