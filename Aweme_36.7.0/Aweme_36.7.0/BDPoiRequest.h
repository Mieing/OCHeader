@class NSString;

@interface BDPoiRequest : NSObject

@property (copy, nonatomic) NSString *scenario;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long locationPrecise;
@property (nonatomic) BOOL locationAllowed;
@property (nonatomic) BOOL locationInstalled;
@property (copy, nonatomic) NSString *poiID;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate2D;
@property (copy, nonatomic) NSString *keywords;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *types;
@property (copy, nonatomic) NSString *rankby;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long radius;
@property (nonatomic) long long offset;
@property (nonatomic) long long page;

- (void).cxx_destruct;

@end
