@class NSArray;

@interface MAHeatMapGradient : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *startPoints;

- (id)initWithColor:(id)a0 andWithStartPoints:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
