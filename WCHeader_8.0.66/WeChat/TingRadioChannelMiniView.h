@class UIImageView, PAGView, UIView, PAGFile;

@interface TingRadioChannelMiniView : UIView

@property (retain, nonatomic) UIImageView *coverImage;
@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) PAGView *waveMaskLayer;
@property (weak, nonatomic) PAGFile *waveFile;
@property (retain, nonatomic) UIView *waveColorView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)initPagWave;
- (void)layoutSubviews;
- (void)setCustomImage:(id)a0;
- (void).cxx_destruct;

@end
