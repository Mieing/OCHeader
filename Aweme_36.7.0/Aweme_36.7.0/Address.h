@class NSString;

@interface Address : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (nonatomic) long long cityCode;
@property (nonatomic) long long countryCode;
@property (nonatomic) long long cityGeoNameId;
@property (nonatomic) long long countryGeoNameId;
@property (nonatomic) long long provinceGeoNameId;
@property (nonatomic) long long flags;
@property (nonatomic) long long provinceCode;
@property (nonatomic) long long timestamp;

+ (id)descriptor;

@end
