@class NSString;

@interface HTSLiveAddressInfo : IESLivePBBaseMessage

@property (nonatomic) long long countryGeoNameId;
@property (nonatomic) long long provinceCode;
@property (nonatomic) long long cityCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;

+ (id)descriptor;

@end
