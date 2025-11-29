@class NSArray, NSString;

@interface AWENearbyPOITagRateInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *impressions;
@property (copy, nonatomic) NSString *recommendTag;
@property (copy, nonatomic) NSArray *tagRateList;
@property (nonatomic) long long tagRatesCount;

+ (id)impressionsJSONTransformer;
+ (id)tagRateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
