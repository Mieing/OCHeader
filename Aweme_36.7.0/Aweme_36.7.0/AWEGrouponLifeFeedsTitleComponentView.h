@class UILabel, CAGradientLayer;

@interface AWEGrouponLifeFeedsTitleComponentView : AWEGrouponLifeFeedsBaseComponentView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;

- (void)bindViewModel:(id)a0;
- (id)titleViewModel;
- (void)updateUILayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
