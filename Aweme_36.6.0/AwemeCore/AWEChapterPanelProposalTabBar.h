@class UIView;

@interface AWEChapterPanelProposalTabBar : UIView

@property (nonatomic) BOOL isLocatedProposal;
@property (retain, nonatomic) UIView *proposalSubTab;
@property (retain, nonatomic) UIView *originSubTab;
@property (copy, nonatomic) id /* block */ didSwitchTab;

- (void)configUI;
- (void)switchToProposalTab:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
