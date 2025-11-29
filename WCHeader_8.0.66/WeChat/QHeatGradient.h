@class NSArray;

@interface QHeatGradient : NSObject {
    int _mapSize;
}

@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *startPoints;

- (id)initWithColor:(id)a0 andWithStartPoints:(id)a1;
- (int)getMapSize;
- (void).cxx_destruct;

@end
