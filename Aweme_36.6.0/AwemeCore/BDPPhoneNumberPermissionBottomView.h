@class UIButton;

@interface BDPPhoneNumberPermissionBottomView : UIView

@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)buttonClicked;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
