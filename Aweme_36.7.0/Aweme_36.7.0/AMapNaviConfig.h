@class NSString;

@interface AMapNaviConfig : NSObject

@property (copy, nonatomic) NSString *appScheme;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } destination;
@property (nonatomic) long long strategy;

- (void).cxx_destruct;
- (id)description;

@end
