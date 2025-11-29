@class NSString;

@interface AMapPOIConfig : NSObject

@property (copy, nonatomic) NSString *appScheme;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *keywords;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } leftTopCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } rightBottomCoordinate;

- (void).cxx_destruct;
- (id)description;

@end
