@interface OTColorValue : NSObject

@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double weight;

+ (id)colorValueWith:(id)a0;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (double)distanceWith:(id)a0;
- (void)meanWithColorValue:(id)a0;
- (id)color;

@end
