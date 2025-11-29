@class CJPayNotSufficientFundsView, UILabel, UIView, CJPayHomePageAmountView;

@interface CJPayCombinationPaymentAmountView : UIView

@property (retain, nonatomic) CJPayHomePageAmountView *amountView;
@property (retain, nonatomic) UILabel *cashPaymentLabel;
@property (retain, nonatomic) UILabel *cashAmountLabel;
@property (retain, nonatomic) UILabel *bankCardPaymentLabel;
@property (retain, nonatomic) UILabel *bankCardAmountLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) CJPayNotSufficientFundsView *notSufficientFundsView;
@property (retain, nonatomic) UILabel *cardInfoLabel;
@property (nonatomic) BOOL showNotSufficient;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL notSufficient;

- (void)updateAmount:(id)a0;
- (void)updateStyleIfShowNotSufficient:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
