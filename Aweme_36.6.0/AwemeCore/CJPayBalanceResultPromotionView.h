@class UIImageView, CJPayBalanceResultPromotionDescView, CJPayBalanceResultPromotionAmountView;

@interface CJPayBalanceResultPromotionView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *seperateView;
@property (retain, nonatomic) CJPayBalanceResultPromotionAmountView *amountView;
@property (retain, nonatomic) CJPayBalanceResultPromotionDescView *rightDescView;

- (void)updateWithPromotionModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
