@class DUXButton, AWESpecialCardDoubleButtonComponentConfig;

@interface AWESpecialCardDoubleButtonComponent : UIView

@property (retain, nonatomic) DUXButton *leftButton;
@property (retain, nonatomic) DUXButton *rightButton;
@property (retain, nonatomic) AWESpecialCardDoubleButtonComponentConfig *componentConfig;

- (id)getDefaultButton;
- (void)updateButton:(id)a0 withConfig:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
