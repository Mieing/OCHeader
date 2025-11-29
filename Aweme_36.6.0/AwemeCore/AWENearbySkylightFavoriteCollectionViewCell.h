@class UIStackView, CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWENearbySkylightFavoriteCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)__buildUI;
- (void)__layoutUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
