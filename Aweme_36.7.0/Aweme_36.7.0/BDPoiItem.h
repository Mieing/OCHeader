@class NSString, NSDictionary;

@interface BDPoiItem : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate2D;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *formattedAddress;
@property (copy, nonatomic) NSString *tel;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSDictionary *details;

+ (id)poiItemWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
