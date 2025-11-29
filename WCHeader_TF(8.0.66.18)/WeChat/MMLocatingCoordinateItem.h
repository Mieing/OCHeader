@class NSString;

@interface MMLocatingCoordinateItem : NSObject

@property (retain, nonatomic) NSString *nation;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *district;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *route;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSString *roughAddress;
@property (retain, nonatomic) NSString *roughAddressWithDirection;
@property (retain, nonatomic) NSString *addressDescrption;
@property (retain, nonatomic) NSString *nearestPoiId;
@property (retain, nonatomic) NSString *nearestPoiName;
@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *poiName;
@property (nonatomic) double distanceToLandmark;
@property (retain, nonatomic) NSString *nationalCode;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) id requestObj;
@property (retain, nonatomic) NSString *addressNameId;
@property (retain, nonatomic) NSString *countryCode;

- (id)description;
- (void).cxx_destruct;

@end
