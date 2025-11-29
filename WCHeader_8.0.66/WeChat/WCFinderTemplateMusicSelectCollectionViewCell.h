@class CAGradientLayer, MMUIImageView, UILabel, UIView, WCStoryLyricWaveView;

@interface WCFinderTemplateMusicSelectCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) MMUIImageView *imageView;
@property (weak, nonatomic) WCStoryLyricWaveView *waveView;

+ (id)cellID;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)prepareForReuse;
- (void)setupViews;
- (void)updateWithInfo:(id)a0;
- (void)setSelectState:(BOOL)a0;
- (void)startAnimating;
- (void)stopAnimating;
- (void)startLyricAnimation;
- (void)stopLyricAnimation;
- (void).cxx_destruct;

@end
