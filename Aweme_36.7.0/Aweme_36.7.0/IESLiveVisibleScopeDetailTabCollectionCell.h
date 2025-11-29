@class UILabel, UIView;

@interface IESLiveVisibleScopeDetailTabCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)identifier;

- (void)configWithType:(unsigned long long)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
