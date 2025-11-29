@class NSString;

@interface QPoiInfo : NSObject

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;

- (void).cxx_destruct;

@end
