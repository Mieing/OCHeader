@class NSArray;

@interface QHeatTileGradient : NSObject {
    int _mapSize;
}

@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *startPoints;

- (id)initWithColor:(id)a0 andWithStartPoints:(id)a1;
- (id)generateColorMap:(double)a0;
- (id)interpolateColorFrom:(id)a0 to:(id)a1 ratio:(float)a2;
- (void).cxx_destruct;

@end
