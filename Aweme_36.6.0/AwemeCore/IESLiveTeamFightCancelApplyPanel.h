@interface IESLiveTeamFightCancelApplyPanel : UIView

@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)onCancelButtonClicked;
- (void)setupViewWithWaitResponse:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 waitResponse:(id)a1 actionBlock:(id /* block */)a2 DIContext:(id)a3;
- (void).cxx_destruct;

@end
