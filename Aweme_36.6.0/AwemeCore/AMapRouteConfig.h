@class NSString;

@interface AMapRouteConfig : NSObject

@property (copy, nonatomic) NSString *appScheme;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } startCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } destinationCoordinate;
@property (nonatomic) long long drivingStrategy;
@property (nonatomic) long long transitStrategy;
@property (nonatomic) long long routeType;

- (void).cxx_destruct;
- (id)description;

@end
