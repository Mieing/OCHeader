@class UIImageView, UILabel, UIView;

@interface AWEProfileGoldIconTipView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) long long goldNum;

- (void)configWithGoldNum:(long long)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
