@class UIImageView, CJPayButton, UILabel, UIView, MASConstraint;

@interface CJPayChoosedPayMethodView : UIView

@property (retain, nonatomic) UIView *normalContentView;
@property (retain, nonatomic) UIView *combineContentView;
@property (retain, nonatomic) UILabel *payTitleLabel;
@property (retain, nonatomic) UIImageView *payDescIconImageView;
@property (retain, nonatomic) UILabel *payDescLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *payDetailDescLabel;
@property (retain, nonatomic) CJPayButton *normalMethodChooseButton;
@property (retain, nonatomic) UILabel *combineBalanceTitleLabel;
@property (retain, nonatomic) UILabel *combineBalanceDescLabel;
@property (retain, nonatomic) UILabel *combineBankTitleLabel;
@property (retain, nonatomic) UILabel *combineBankDescLabel;
@property (retain, nonatomic) MASConstraint *normalContentViewEdgesBaseSuperConstraint;
@property (retain, nonatomic) MASConstraint *combineContentViewEdgesBaseSuperConstraint;
@property (nonatomic) BOOL isCombinedPay;
@property (copy, nonatomic) id /* block */ clickedPayMethodBlock;

- (void)p_setupViews;
- (void)p_setupUIForNormal;
- (void)p_setupUIForCombinedPay;
- (void)p_updateCombineContentView:(id)a0;
- (void)p_updateNormalContentView:(id)a0;
- (id)p_stringSeparatedWithDollar:(id)a0 textAlignment:(long long)a1;
- (id)initIsCombinePay:(BOOL)a0;
- (void)updateContentByChannelConfigs:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
