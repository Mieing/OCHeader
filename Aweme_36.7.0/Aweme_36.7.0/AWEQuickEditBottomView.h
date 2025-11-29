@class UIButton, UIView;

@interface AWEQuickEditBottomView : UIView

@property (retain, nonatomic) UIView *verticalSepView;
@property (retain, nonatomic) UIView *horizontalSepView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)clickCancelBtn:(id)a0;
- (void)clickConfirmBtn:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
