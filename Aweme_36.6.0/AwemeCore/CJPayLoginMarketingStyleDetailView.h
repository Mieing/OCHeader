@class UILabel, MASConstraint, UIView;

@interface CJPayLoginMarketingStyleDetailView : UIView

@property (retain, nonatomic) UIView *amountView;
@property (retain, nonatomic) UILabel *currencyLabel;
@property (retain, nonatomic) UILabel *tradeAmountLabel;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) MASConstraint *currencyLabelConstraint;
@property (retain, nonatomic) MASConstraint *voucherLabelConstraint;

- (void)p_setupConstraints;
- (void)updateLoginMarketingStyleDetailWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
