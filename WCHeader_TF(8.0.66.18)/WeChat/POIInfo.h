@class NSString;

@interface POIInfo : NSObject <NSCoding, NSCopying>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) BOOL isCoordinateError;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSString *bid;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *poiCategoryTips;
@property (retain, nonatomic) NSString *poiBusinessHour;
@property (retain, nonatomic) NSString *poiPhone;
@property (retain, nonatomic) NSString *poiPriceTips;
@property (nonatomic) BOOL isFromPoiList;
@property (retain, nonatomic) NSString *infoUrl;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) unsigned int adCode;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;
@property (nonatomic) long long source;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isIndoor;
- (BOOL)isPrivated;
- (BOOL)isPOIAllowForwardOrFav;
- (void).cxx_destruct;

@end
