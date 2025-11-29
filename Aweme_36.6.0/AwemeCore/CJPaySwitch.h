@class UIColor, UIView;

@interface CJPaySwitch : UIControl

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *spotView;
@property (nonatomic, getter=isOn) BOOL on;
@property (retain, nonatomic) UIColor *onTintColor;

- (void)p_switch;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;

@end
