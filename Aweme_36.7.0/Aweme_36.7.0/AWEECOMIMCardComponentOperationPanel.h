@class UIStackView;

@interface AWEECOMIMCardComponentOperationPanel : UIView

@property (retain, nonatomic) UIStackView *stackView;

+ (double)designHeight;

- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
