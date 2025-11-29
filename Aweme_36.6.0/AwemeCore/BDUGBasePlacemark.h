@class NSString, NSArray, NSDictionary, BDUGGpsInfo;

@interface BDUGBasePlacemark : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL addressJoint;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *streetNumber;
@property (copy, nonatomic) NSString *floor;
@property (nonatomic, getter=isDisputed) BOOL disputed;
@property (nonatomic) long long source;
@property (nonatomic) long long geoType;
@property (nonatomic, getter=isGeocodeSucceed) BOOL geocodeSucceed;
@property (retain, nonatomic) BDUGGpsInfo *latLng;
@property (copy, nonatomic) NSArray *poiList;
@property (copy, nonatomic) NSArray *aoiList;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (id)initWithAddress:(id)a0 addressJoint:(BOOL)a1 country:(id)a2 administrativeArea:(id)a3 subAdministrativeArea:(id)a4 city:(id)a5 district:(id)a6 cityCode:(id)a7 street:(id)a8 streetNumber:(id)a9 floor:(id)a10 disputed:(BOOL)a11 source:(long long)a12 geoType:(long long)a13 geocodeSucceed:(BOOL)a14 latLng:(id)a15 poiList:(id)a16 aoiList:(id)a17 extraInfo:(id)a18;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
