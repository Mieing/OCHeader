@class UIColor;

@interface OMJImageMaskStyle : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } displayInsets;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (retain, nonatomic) UIColor *maskColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowWidth;
@property (retain, nonatomic) UIColor *cornerColor;
@property (nonatomic) double cornerWidth;
@property (nonatomic) double cornerLength;

+ (id)defaultStyle;
+ (id)clearStyle;

- (id)initWithdisplayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 centerOffset:(struct CGPoint { double x0; double x1; })a1 maskColor:(id)a2 strokeColor:(id)a3 strokeWidth:(double)a4 shadowColor:(id)a5 shadowWidth:(double)a6 cornerColor:(id)a7 cornerWidth:(double)a8 cornerLength:(double)a9;
- (id)description;
- (void).cxx_destruct;

@end
