@class NSDictionary, IESECLivePriceLabel;

@interface IESECLiveSlicePriceLabelView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) IESECLivePriceLabel *priceLabel;
@property (copy, nonatomic) NSDictionary *priceDict;
@property (copy, nonatomic) NSDictionary *fontStyleDict;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)setupPriceLabelByFontStyleDict:(id)a0;
- (void)updatePriceLabelByPriceDict:(id)a0;
- (void)setupPriceLabelByFontStyleModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupViews;

@end
