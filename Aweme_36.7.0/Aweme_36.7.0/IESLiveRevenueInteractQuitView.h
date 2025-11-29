@interface IESLiveRevenueInteractQuitView : HTSLivePopUpView

@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ relinkAnchorBlock;
@property (copy, nonatomic) id /* block */ leaveWithTeamMateBlock;

- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (void)onLeaveWithTeamMateClicked;
- (void)onChooseAnchorClicked;
- (void).cxx_destruct;
- (void)setupUI;

@end
