@class UIImageView, UILabel, UIView;

@interface AWEPlayletCellMaskView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *playImgView;
@property (retain, nonatomic) UILabel *titleLabel;

- (BOOL)enableAdaptPlayletBigFontMode;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleLabelFont;
- (void)configureWithTitle:(id)a0;
- (void)setUpUI;

@end
