@class UIColor, UIImageView, UIImage, UILabel, AWEGradientView, UIButton;

@interface AWEMixVideoSmallCardCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImage *placeholder;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *episodeLineColor;
@property (retain, nonatomic) UIImageView *picoVRTagView;

+ (id)titleFont;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)setThemeStyle:(id)a0;
- (void)configWithAwemeModel:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
