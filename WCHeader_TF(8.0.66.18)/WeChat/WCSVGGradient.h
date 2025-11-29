@class NSString, NSMutableArray;

@interface WCSVGGradient : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSMutableArray *stops;
@property (retain, nonatomic) NSString *gradientId;
@property (nonatomic) long long type;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } gradientTransform;

- (id)initWithType:(long long)a0 attributes:(id)a1;
- (void)addStopWithAttributes:(id)a0;
- (struct CGGradient { } *)gradientFromTintColor:(id)a0;
- (void)applyGradientToStyledPath:(id)a0 tintColor:(id)a1 inContext:(struct CGContext { } *)a2;
- (void).cxx_destruct;

@end
