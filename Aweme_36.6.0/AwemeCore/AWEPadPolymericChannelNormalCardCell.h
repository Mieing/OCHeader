@class AWEPadPolymericChannelMarkLabel, UIImageView, UILabel, AWEGradientView;

@interface AWEPadPolymericChannelNormalCardCell : UICollectionViewCell

@property (retain, nonatomic) AWEPadPolymericChannelMarkLabel *tagViewGradientView;
@property (retain, nonatomic) AWEGradientView *coverBottomInfoMaskView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *playIcon;

- (void)configCardTag:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;
- (void)makeLayout;

@end
