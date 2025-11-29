@class UIImageView, UILabel, UIView;

@interface AWELiveAcqMixItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)configWithMixVideoModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
