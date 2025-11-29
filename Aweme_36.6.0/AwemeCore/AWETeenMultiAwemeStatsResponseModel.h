@class NSDictionary;

@interface AWETeenMultiAwemeStatsResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *awemeExtraInfo;

+ (id)awemeExtraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
