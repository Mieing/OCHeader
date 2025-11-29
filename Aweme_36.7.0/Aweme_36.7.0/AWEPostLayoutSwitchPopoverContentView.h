@class UILabel, DUXSwitch, UIView;

@interface AWEPostLayoutSwitchPopoverContentView : UIView

@property (retain, nonatomic) UIView *topAccessibilityContainerView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) DUXSwitch *layoutSwitch;
@property (copy, nonatomic) id /* block */ valueChangedBlock;

- (double)leftOffset;
- (double)rightOffset;
- (double)middleInset;
- (void).cxx_destruct;
- (double)topOffset;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setSwitchOn:(BOOL)a0;
- (double)bottomOffset;

@end
