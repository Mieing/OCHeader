@class UILabel, ACCAnimatedButton, UIView;

@interface ACCMusicSimpleAlertView : UIView

@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCAnimatedButton *confirmButton;
@property (retain, nonatomic) ACCAnimatedButton *cancelButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (nonatomic) BOOL isAnimating;

+ (void)showAlertOnView:(id)a0 withTitle:(id)a1 confirmButtonTitle:(id)a2 cancelButtonTitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;

- (void)showOnView:(id)a0;
- (void)didClickConfirmButton:(id)a0;
- (void)didClickCancelButton:(id)a0;
- (void)p_dismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTitle:(id)a1 confirmButtonTitle:(id)a2 cancelButtonTitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
