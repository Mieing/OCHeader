@class DUXBaseLabel, DUXBaseButton;

@interface AWEVisionFlashLightView : UIView

@property (retain, nonatomic) DUXBaseButton *button;
@property (retain, nonatomic) DUXBaseLabel *label;

- (void)turnOn;
- (void)makeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withOrientation:(long long)a1;
- (void)updateButtonAccessibility;
- (void)setupSubViews;
- (void).cxx_destruct;
- (BOOL)isOn;
- (id)init;
- (void)turnOff;

@end
