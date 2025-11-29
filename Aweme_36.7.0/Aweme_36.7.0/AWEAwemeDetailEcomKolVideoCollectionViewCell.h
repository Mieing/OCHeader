@class UIImageView, UILabel, CAGradientLayer;

@interface AWEAwemeDetailEcomKolVideoCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)updateSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
