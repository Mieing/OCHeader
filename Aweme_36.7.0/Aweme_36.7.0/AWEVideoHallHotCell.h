@class AWEGradientView, UIVisualEffectView, UILabel, DUXTextTag, BDImageView;

@interface AWEVideoHallHotCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *cover;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXTextTag *videoTag;
@property (retain, nonatomic) UILabel *updateCycleLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIVisualEffectView *appbrandIconBlurView;
@property (retain, nonatomic) BDImageView *appbrandIconView;

- (void)configurationWithItem:(id)a0;
- (void)setCornerMarkLabelWithAlbumModel:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
