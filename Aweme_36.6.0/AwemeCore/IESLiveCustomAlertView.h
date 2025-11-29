@class UILabel, NSArray, UIView;

@interface IESLiveCustomAlertView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) NSArray *actions;

+ (void)showAlertViewWithTitle:(id)a0 content:(id)a1 inView:(id)a2 actions:(id)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 content:(id)a2 actions:(id)a3;
- (id)createButtonWithTitle:(id)a0 textColor:(id)a1 actionBlock:(id /* block */)a2;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
