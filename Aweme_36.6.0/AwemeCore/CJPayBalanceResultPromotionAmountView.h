@class UILabel;

@interface CJPayBalanceResultPromotionAmountView : UIView

@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *amountDescLabel;

- (void)updateWithPromotionModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
