@interface MeasureContext : NSObject

@property (readonly, nonatomic) double rootWidth;
@property (readonly, nonatomic) long long rootWidthMode;
@property (readonly, nonatomic) double rootHeight;
@property (readonly, nonatomic) long long rootHeightMode;
@property (readonly, nonatomic) BOOL finalMeasure;

- (id)initWithFinalMeasure:(BOOL)a0;

@end
