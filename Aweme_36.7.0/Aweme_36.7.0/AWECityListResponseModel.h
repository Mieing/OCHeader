@class NSArray, AWECityModel;

@interface AWECityListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *allCities;
@property (copy, nonatomic) NSArray *hotCities;
@property (copy, nonatomic) NSArray *historyCities;
@property (retain, nonatomic) AWECityModel *currentCity;

+ (BOOL)automaticallyDefaultMapping;
+ (id)hotCitiesJSONTransformer;
+ (id)allCitiesJSONTransformer;
+ (id)historyCitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
