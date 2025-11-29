@class NSDictionary, IESECECTagView, IESECECTagAttributes;

@interface SLIECTagElementView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) NSDictionary *tagData;
@property (retain, nonatomic) IESECECTagAttributes *tagAttrs;
@property (retain, nonatomic) IESECECTagView *ecTagView;

+ (void)initialize;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
