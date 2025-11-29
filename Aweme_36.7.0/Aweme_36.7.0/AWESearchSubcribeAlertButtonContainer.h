@class UIButton, UIView;

@interface AWESearchSubcribeAlertButtonContainer : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *middleLine;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;

- (id)createLine;
- (id)createButtonWithFont:(id)a0 titleColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
