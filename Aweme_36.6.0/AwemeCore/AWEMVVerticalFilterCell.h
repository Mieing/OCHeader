@class UILabel;

@interface AWEMVVerticalFilterCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

- (void)configWithTitle:(id)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
