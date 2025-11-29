@class UIView, UILabel, DUXTextTag, UIButton;

@interface AWEMixVideoHorizontalCellHeader : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXTextTag *textTag;
@property (retain, nonatomic) UIButton *moreTitleButton;
@property (retain, nonatomic) UIView *titleHandleView;

+ (id)titleFont;
+ (double)headerHeight;

- (void)setThemeStyle:(id)a0;
- (void)configWithMixVideoModel:(id)a0 tagTitle:(id)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
