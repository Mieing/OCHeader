@class UIColor, UIView;

@interface BDSCSwitch : UIControl

@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isOn;
@property (retain, nonatomic) UIColor *onTintColor;
@property (retain, nonatomic) UIColor *offTintColor;
@property (retain, nonatomic) UIColor *thumbTintColor;

- (void)switchTapped:(id)a0;
- (void).cxx_destruct;
- (void)updateAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)setupUI;

@end
