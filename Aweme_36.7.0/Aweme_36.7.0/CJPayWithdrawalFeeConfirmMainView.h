@class MASConstraint, UILabel, CJPayWithdrawalFeeItemView, UIView;

@interface CJPayWithdrawalFeeConfirmMainView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) CJPayWithdrawalFeeItemView *firstItemView;
@property (retain, nonatomic) CJPayWithdrawalFeeItemView *secondItemView;
@property (retain, nonatomic) CJPayWithdrawalFeeItemView *thirdItemView;
@property (retain, nonatomic) MASConstraint *bottomBaseFirstItemConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseSecondItemConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseThirdItemConstraint;
@property (nonatomic) unsigned long long infoStartLocation;
@property (copy, nonatomic) id /* block */ infoClickBlock;

- (void)p_infoClick:(id)a0;
- (void)updateWithFeeQueryResponse:(id)a0 balanceAmount:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
