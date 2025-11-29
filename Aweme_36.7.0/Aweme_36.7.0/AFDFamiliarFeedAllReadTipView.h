@class UILabel, UIButton;

@interface AFDFamiliarFeedAllReadTipView : UIView

@property (retain, nonatomic) UILabel *toastLabel;
@property (retain, nonatomic) UIButton *btn;
@property (copy, nonatomic) id /* block */ buttonBlock;
@property (nonatomic) double buttonWidth;

- (void)clickButton;
- (struct CGSize { double x0; double x1; })tipSize;
- (id)initWithText:(id)a0 buttonTitle:(id)a1 buttonImage:(id)a2 isBtnImageInRight:(BOOL)a3 buttonBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (void)setupUI;

@end
