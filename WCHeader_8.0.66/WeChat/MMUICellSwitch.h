@class UIView;

@interface MMUICellSwitch : UISwitch

@property (weak, nonatomic) UIView *superContainerView;

- (id)getSuperContainerView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
