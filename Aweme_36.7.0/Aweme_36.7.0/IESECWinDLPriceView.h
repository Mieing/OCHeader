@class IESECGoodsPriceLabel;

@interface IESECWinDLPriceView : IESECDLView

@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (void)clickAction;
- (void)updateUIWithModel:(id)a0;
- (void)renderDataWithModel:(id)a0;
- (void)bindDLEventWithEventData:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
