@class AWEIMGroupUpgradeTaskViewModel, UIImageView, UILabel, UIView;

@interface AWEIMGroupUpgradeTaskCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEIMGroupUpgradeTaskViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *tailIconImageView;
@property (retain, nonatomic) UIView *lineView;

+ (id)identifier;

- (void)__setupUI;
- (id)__baseContentView;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)updateCorners:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
