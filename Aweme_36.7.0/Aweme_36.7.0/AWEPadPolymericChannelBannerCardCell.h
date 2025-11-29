@class UILabel, UIImageView, AWEGradientView;

@interface AWEPadPolymericChannelBannerCardCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverBottomInfoMaskView;

- (void)configDescMaskViewAlpha:(id)a0 locations:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
