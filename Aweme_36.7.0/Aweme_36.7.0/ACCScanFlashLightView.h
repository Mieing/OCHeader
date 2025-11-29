@class UIButton, UILabel;

@interface ACCScanFlashLightView : UIView

@property (retain, nonatomic) UIButton *flashLightButton;
@property (retain, nonatomic) UILabel *flashLightLabel;
@property (nonatomic) unsigned long long style;

- (void)turnOn;
- (void)makeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withOrientation:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isOn;
- (id)init;
- (id)initWithStyle:(unsigned long long)a0;
- (void)setupUI;
- (void)turnOff;

@end
