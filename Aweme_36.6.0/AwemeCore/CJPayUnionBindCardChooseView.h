@class UIView, CJPayUnionBindCardChooseViewModel, CJPayUnionBindCardChooseHeaderView, CJPayAccountInsuranceTipView, CJPayCommonProtocolView, CJPayStyleButton, UITableView, MASConstraint, CJPayBindCardScrollView;

@interface CJPayUnionBindCardChooseView : UIView

@property (retain, nonatomic) CJPayBindCardScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayUnionBindCardChooseHeaderView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) MASConstraint *protocolTopBaseScrollViewConstraint;
@property (retain, nonatomic) MASConstraint *safeGuideTipViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *confirmButtonBaseSafeGuideTipViewConstraint;
@property (retain, nonatomic) MASConstraint *confirmButtonBaseSelfViewConstraint;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (weak, nonatomic) CJPayUnionBindCardChooseViewModel *viewModel;

- (void)p_setupData;
- (void)reloadWithViewModel:(id)a0;
- (void)p_updateViewConstraint;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
