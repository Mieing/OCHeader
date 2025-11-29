@class UIImageView, UILabel, AWEGradientView, YYLabel;

@interface AWETeenDiscoveryVideoCoverCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0 constraintWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })footerSizeWithModel:(id)a0 constraintWidth:(double)a1;
+ (id)titleAttrStrWithModel:(id)a0;
+ (double)titleHeightWithAttrStr:(id)a0 cellWidth:(double)a1;

- (void)configCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
