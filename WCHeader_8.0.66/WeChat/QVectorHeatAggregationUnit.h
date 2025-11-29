@class NSArray;

@interface QVectorHeatAggregationUnit : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } center;
@property (nonatomic) float intensity;
@property (retain, nonatomic) NSArray *nodeIndices;

- (void).cxx_destruct;

@end
