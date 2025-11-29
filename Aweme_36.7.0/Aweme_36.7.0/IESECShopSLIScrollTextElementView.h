@class IESECShopScrollTextComponentModel, NSString, UIFont, IESECShopScrollTextComponent;

@interface IESECShopSLIScrollTextElementView : IESECSliceXBaseContentElementView <IESECShopScrollTextComponentDelegate, IESECShopSLIScrollTextElementView> {
    BOOL _scrollEnabled;
    BOOL _shrinkToFitOptimized;
}

@property (retain, nonatomic) IESECShopScrollTextComponent *scrollText;
@property (retain, nonatomic) IESECShopScrollTextComponentModel *scrollTextModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long scrollState;
@property (readonly, nonatomic) UIFont *font;

- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)resetOffset;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)redoAnimation;
- (void)startScroll:(id /* block */)a0;
- (void)scrollTextComponentDidLayoutSubviews:(id)a0;
- (void)updateWithScrollTextModel:(id)a0;
- (void).cxx_destruct;

@end
