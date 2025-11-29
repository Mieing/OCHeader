@class NSString, NSArray, AWECityModel, NSDictionary;

@interface AWEGrouponC2ListDataResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *mob;
@property (nonatomic) long long hasMore;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) AWECityModel *currentCity;
@property (copy, nonatomic) NSString *serverLatency;
@property (copy, nonatomic) NSString *deliveryInfo;
@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSDictionary *mobDict;
@property (copy, nonatomic) NSString *feedDebugFilter;

+ (id)awemeListJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
