@class NSString;

@interface WARegionPoiInfo : NSObject <NSCoding>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *poiAddress;
@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *adCode;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
