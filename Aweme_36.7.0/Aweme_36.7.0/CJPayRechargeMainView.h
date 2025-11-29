@class CJPayRechargeInputAmountView, CJPayBDCreateOrderResponse, NSString, CJPayDefaultChannelShowConfig, CJPayChooseMethodView;

@interface CJPayRechargeMainView : UIView

@property (retain, nonatomic) CJPayChooseMethodView *methodView;
@property (retain, nonatomic) CJPayRechargeInputAmountView *amountView;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectConfig;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (copy, nonatomic) NSString *defaultDiscount;
@property (copy, nonatomic) id /* block */ chooseCardBlock;

- (void)showLimitLabel:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupViews;

@end
