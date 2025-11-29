@class UIStackView, UIButton, UIView, YYLabel;

@interface AWEIMSafeRemideActionSheetStyleView : AWEIMSafeRemindView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) YYLabel *bodyLabel;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *bottomBackgroundView;

- (BOOL)configWithModel:(id)a0;
- (void)p_configUI;
- (void)setLabel:(id)a0 withAttributedText:(id)a1 preferredMaxLayoutWidth:(double)a2;
- (double)textHeightWithPreferredMaxLayoutWidth:(double)a0 AttributedText:(id)a1;
- (id)p_createButtonWithButtonModel:(id)a0 configModel:(id)a1;
- (void)p_configButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
