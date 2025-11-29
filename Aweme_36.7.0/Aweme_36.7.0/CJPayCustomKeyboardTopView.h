@class CJPayButton, UIImageView;

@interface CJPayCustomKeyboardTopView : UIView

@property (retain, nonatomic) CJPayButton *leftButton;
@property (retain, nonatomic) CJPayButton *rightButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)leftButtonClick;
- (void)rightButtonClick;
- (void)setInsuranceURLString:(id)a0;
- (void)setCompletionBtnHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
