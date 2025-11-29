@class IESECShopSLIPriceModel, NSString, IESECGoodsPriceLabel;

@interface IESECShopSLIPriceElementView : IESECSliceXBaseContentElementView <IESECSliceXFlexObserver> {
    BOOL _widthCompressed;
}

@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECShopSLIPriceModel *priceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)flexDidLayout:(id)a0;
- (void)updatePriceLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
