@class NSArray;

@interface AFDStoryGradientConfig : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (nonatomic) double ringWidth;

- (struct CGPoint { double x0; double x1; })startPointForAngle:(double)a0;
- (struct CGPoint { double x0; double x1; })endPointForAngle:(double)a0;
- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
