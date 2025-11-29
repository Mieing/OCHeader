@class NSDictionary, IESECECTagGroupAttributes, IESECECTagGroupView;

@interface SLIECTagGroupElementView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) NSDictionary *tagGroupData;
@property (retain, nonatomic) IESECECTagGroupAttributes *tagGroupAttrs;
@property (retain, nonatomic) IESECECTagGroupView *ecTagGroupView;
@property (retain, nonatomic) id pendingRenderID;

+ (void)initialize;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
