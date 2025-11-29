@class UILabel;

@interface AWEIMTaskPlatformFilterHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;

- (void)p_setupLayout;
- (void)renderWithTitle:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
