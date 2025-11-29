@interface MAHeatMapVectorNode : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) float weight;

- (id)init;

@end
