@class NSArray;

@interface AFDGradientViewDisplayConfig : NSObject <NSCopying>

@property (nonatomic) double ringWidth;
@property (nonatomic) double ringGap;
@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientLocations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (nonatomic) double angle;
@property (nonatomic) long long gradientType;

+ (id)story25StaticColorConfig;
+ (id)livingSkylightColorConfig;
+ (id)grayColorConfig;
+ (id)profileGrayColorConfig;
+ (id)forwardPanelStaticColorConfig;
+ (id)defaultConfig;

- (struct CGPoint { double x0; double x1; })startPointForAngle:(double)a0;
- (struct CGPoint { double x0; double x1; })endPointForAngle:(double)a0;
- (id /* block */)configGradientAngle;
- (void)configGradientAngle:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
