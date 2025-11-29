@class UIColor, OMJDashLineStyle;

@interface OMJHandleBoxBorderStyle : NSObject

@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowWidth;
@property (readonly, nonatomic) OMJDashLineStyle *dashLineStyle;

- (id)initWithStrokeColor:(id)a0 strokeWidth:(double)a1 shadowColor:(id)a2 shadowWidth:(double)a3;
- (id)initWithStrokeColor:(id)a0 strokeWidth:(double)a1 shadowColor:(id)a2 shadowWidth:(double)a3 dashLineStyle:(id)a4;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
