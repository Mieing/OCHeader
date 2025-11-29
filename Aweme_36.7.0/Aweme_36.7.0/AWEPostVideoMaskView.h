@class UIImageView, UILabel, UIView;

@interface AWEPostVideoMaskView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *playImgView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)__setupUI;
- (void)updateMaskViewTitle:(id)a0;
- (void)updateMaskViewAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)title;

@end
