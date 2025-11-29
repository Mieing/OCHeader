@class UIButton, UILabel;

@interface AWEIMLiveCustomServiceFloatNavigationBar : UIView

@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ backButtonClickBlock;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;
@property (copy, nonatomic) id /* block */ detailButtonClickBlock;

- (void)closeButtonClick;
- (void)showCloseButton:(BOOL)a0;
- (void)showBackButton:(BOOL)a0;
- (void)backButtonClick;
- (void)detailButtonClick;
- (void)showDetailButton:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTitle:(id)a0;

@end
