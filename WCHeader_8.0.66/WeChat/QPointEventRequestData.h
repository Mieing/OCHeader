@class NSString;

@interface QPointEventRequestData : NSObject

@property (retain, nonatomic) NSString *bounds;
@property (nonatomic) float zoomLevel;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;

- (void).cxx_destruct;

@end
