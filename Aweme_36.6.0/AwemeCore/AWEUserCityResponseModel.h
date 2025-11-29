@class NSString;

@interface AWEUserCityResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *cityCode;
@property (retain, nonatomic) NSString *districtCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
