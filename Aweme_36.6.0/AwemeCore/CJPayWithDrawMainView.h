@class CJPayBDCreateOrderResponse, CJPayWithDrawInputAmountView, NSString, CJPayDefaultChannelShowConfig, CJPayChooseMethodView;

@interface CJPayWithDrawMainView : UIView

@property (retain, nonatomic) CJPayChooseMethodView *methodView;
@property (retain, nonatomic) CJPayWithDrawInputAmountView *amountView;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectConfig;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (copy, nonatomic) NSString *defaultDiscount;
@property (copy, nonatomic) id /* block */ chooseCardBlock;

- (void)adapterTheme;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupViews;

@end
