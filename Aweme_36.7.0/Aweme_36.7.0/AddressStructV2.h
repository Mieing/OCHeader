@class NSString;

@interface AddressStructV2 : GPBMessage

@property (copy, nonatomic) NSString *province;
@property (nonatomic) BOOL hasProvince;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) BOOL hasCity;
@property (copy, nonatomic) NSString *district;
@property (nonatomic) BOOL hasDistrict;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL hasAddress;
@property (copy, nonatomic) NSString *simpleAddr;
@property (nonatomic) BOOL hasSimpleAddr;
@property (copy, nonatomic) NSString *cityCode;
@property (nonatomic) BOOL hasCityCode;
@property (copy, nonatomic) NSString *country;
@property (nonatomic) BOOL hasCountry;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (copy, nonatomic) NSString *adCodeV2;
@property (nonatomic) BOOL hasAdCodeV2;
@property (copy, nonatomic) NSString *cityCodeV2;
@property (nonatomic) BOOL hasCityCodeV2;

+ (id)descriptor;

@end
