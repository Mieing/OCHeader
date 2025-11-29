@interface IESGCPLinearValueCurve : IESGCPValueCurve

@property (nonatomic) double from;
@property (nonatomic) double to;

- (id)transform:(double)a0;

@end
