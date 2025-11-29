@class QMarkerView;

@interface QMarkerViewAnimationLayer : CALayer

@property (weak, nonatomic) QMarkerView *markerView;
@property (nonatomic) struct CGPoint { double x; double y; } coordinate;
@property (nonatomic) double alpha;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGPoint { double x; double y; } scale;

+ (BOOL)isMatchingKeys:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (void).cxx_destruct;

@end
