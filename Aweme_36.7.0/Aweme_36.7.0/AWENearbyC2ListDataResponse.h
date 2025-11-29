@class NSString, NSArray, AWECityModel, NSDictionary;

@interface AWENearbyC2ListDataResponse : AWEBaseApiModel <AWENearbyFeedColdCacheResponseProtocol>

@property (copy, nonatomic) NSString *mob;
@property (nonatomic) long long hasMore;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) AWECityModel *currentCity;
@property (copy, nonatomic) NSString *serverLatency;
@property (copy, nonatomic) NSString *deliveryInfo;
@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSDictionary *mobDict;
@property (copy, nonatomic) NSString *feedDebugFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
