@class UIImageView, UILabel, UIView;

@interface AWEMaterialSmallCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) UIView *skeletonView;

+ (id)reuseIdentifier;

- (void)setupSkeletonMode;
- (void)configWithModel:(id)a0 coverLoadCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
