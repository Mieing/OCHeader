@class NSString, UIView;

@interface SLIXFlowLayoutElementView : IESECSliceXBaseContainerElementView <IESECSliceXFlexDelegate>

@property (nonatomic) BOOL isDirty;
@property (nonatomic) double prevWidthLimit;
@property (retain, nonatomic) UIView *itemsContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (id)flexSubviews;
- (BOOL)setupSubElementViews;
- (id)elementViews;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)containerView;
- (void)layoutSubviews;

@end
