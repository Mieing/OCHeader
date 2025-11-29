@class UIImageView;

@interface WCBrandAudioPlayView : TingSharePlayButton

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *fgImageView;

- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setBgImageAnimationImages:(struct CGSize { double x0; double x1; })a0;
- (void)setFgImageHighlightedImage:(struct CGSize { double x0; double x1; })a0;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setSelected:(BOOL)a0;
- (void)onMusicPlayStatusChanged;
- (void).cxx_destruct;

@end
