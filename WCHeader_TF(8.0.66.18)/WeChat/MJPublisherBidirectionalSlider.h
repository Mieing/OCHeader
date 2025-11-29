@class CALayer, UIColor;

@interface MJPublisherBidirectionalSlider : MJPublisherDefaultValueSlider

@property (retain, nonatomic) CALayer *highlightedTrackLayer;
@property (retain, nonatomic) UIColor *highlightedTrackTintColor;

- (void)commonInit;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightedTrackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setMaximumTrackTintColor:(id)a0;
- (void)layoutHighlightedLayerAnimated:(BOOL)a0;
- (double)ratioForValue:(double)a0;
- (void).cxx_destruct;

@end
