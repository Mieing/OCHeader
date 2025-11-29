@class NSString;

@interface WCPayAddressCache : NSObject <PBCoding>

@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *district;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) long long positionTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_district;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_countryCode;
+ (void)PBArrayAdd_positionTs;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
