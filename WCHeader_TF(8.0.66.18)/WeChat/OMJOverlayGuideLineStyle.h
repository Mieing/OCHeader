@class UIColor;

@interface OMJOverlayGuideLineStyle : NSObject

@property (nonatomic) int lineWeight;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;

- (id)init;
- (id)initWithLineWeight:(int)a0 backgroundColor:(id)a1;
- (id)initWithLineWeight:(int)a0 backgroundColor:(id)a1 shadowOpacity:(float)a2 shadowOffset:(struct CGSize { double x0; double x1; })a3 shadowRadius:(double)a4 shadowColor:(id)a5;
- (void).cxx_destruct;

@end
