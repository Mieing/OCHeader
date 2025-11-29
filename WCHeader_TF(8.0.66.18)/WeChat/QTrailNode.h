@interface QTrailNode : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) int timeStamp;

@end
