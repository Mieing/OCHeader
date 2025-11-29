@class UILabel, MASConstraint;

@interface CJPayHomePageAmountView : UIView

@property (retain, nonatomic) UILabel *rmbUnitLabel;
@property (retain, nonatomic) UILabel *totalAmountLabel;
@property (retain, nonatomic) UILabel *amountDetailLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) MASConstraint *discountLabelBottomSelfConstraint;
@property (retain, nonatomic) MASConstraint *detailLabelBottomSelfConstraint;

- (void)updateTextColor:(id)a0;
- (void)updateWithTotalAmount:(id)a0 withDetailInfo:(id)a1 discountStr:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
