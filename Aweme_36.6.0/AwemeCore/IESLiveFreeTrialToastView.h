@class UILabel, UIButton, UIView;

@interface IESLiveFreeTrialToastView : UIView

@property (weak, nonatomic) UIView *bottomView;
@property (weak, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) UIButton *buyTicketButton;
@property (copy, nonatomic) id /* block */ buyTicketAction;

- (void)buyTicketButtonAction:(id)a0;
- (void)updateTipInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
