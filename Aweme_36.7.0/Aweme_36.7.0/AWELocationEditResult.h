@class NSString, NSNumber;

@interface AWELocationEditResult : NSObject

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSNumber *countryId;
@property (copy, nonatomic) NSNumber *provinceId;
@property (copy, nonatomic) NSNumber *cityId;
@property (copy, nonatomic) NSNumber *districtId;
@property (nonatomic) BOOL isAutoLocated;

- (id)generateIdList;
- (void).cxx_destruct;

@end
