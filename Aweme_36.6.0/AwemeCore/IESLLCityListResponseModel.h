@class NSArray;
@protocol IESLLCityModel;

@interface IESLLCityListResponseModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSArray *allCities;
@property (copy, nonatomic) NSArray *hotCities;
@property (copy, nonatomic) NSArray *historyCities;
@property (retain, nonatomic) id<IESLLCityModel> currentCity;

+ (BOOL)automaticallyDefaultMapping;
+ (id)hotCitiesJSONTransformer;
+ (id)allCitiesJSONTransformer;
+ (id)historyCitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
