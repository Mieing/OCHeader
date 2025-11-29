@class CALayer, UISelectionFeedbackGenerator, UIColor;

@interface MJPublisherDefaultValueSlider : MJPublisherSlider {
    struct map<float, double, std::less<float>, std::allocator<std::pair<const float, double>>> { struct __tree<std::__value_type<float, double>, std::__map_value_compare<float, std::__value_type<float, double>, std::less<float>>, std::allocator<std::__value_type<float, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<float, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<float, std::__value_type<float, double>, std::less<float>>> { unsigned long long __value_; } __pair3_; } __tree_; } _gearXCoordsByValue;
}

@property (retain, nonatomic) UISelectionFeedbackGenerator *snapFeedbackGenerator;
@property (retain, nonatomic) CALayer *defaultValueMarkLayer;
@property (nonatomic) float defaultValue;
@property (nonatomic) double trackMarkHeight;
@property (nonatomic) double autoSnapThreshold;
@property (retain, nonatomic) UIColor *defaultValueMarkColor;
@property (nonatomic) BOOL isSnapFeedbackEnabled;

- (void)commonInit;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (float)valueForTouchPoint:(struct CGPoint { double x0; double x1; })a0 withTrackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultValueMarkRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateGearXCoordsCache;
- (void)layoutMarkLayerAnimated:(BOOL)a0;
- (double)ratioForValue:(double)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)feedbackIfNeededWithValue:(float)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
