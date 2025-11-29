@class NSString;

@interface AWEUserHometownModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *districtCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
