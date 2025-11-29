@class NSString, AWEPOIEXP3ButtonViewStyle, UIButton;

@interface AWEPOIEXP3ButtonView : UIView

@property (readonly, nonatomic) double viewNeedWidth;
@property (readonly, copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEPOIEXP3ButtonViewStyle *style;
@property (retain, nonatomic) UIButton *actionButton;

- (void)configWithButtonTitle:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
