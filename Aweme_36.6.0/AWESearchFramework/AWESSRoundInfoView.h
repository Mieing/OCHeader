@class UILabel;

@interface AWESSRoundInfoView : UIView

@property (retain, nonatomic) UILabel *textLabel;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeWithText:(id)a0;

- (void)awe_themeDidChange:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
