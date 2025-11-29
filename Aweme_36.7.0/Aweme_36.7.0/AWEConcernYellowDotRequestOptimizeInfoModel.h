@class NSString, AWEConcernYellowDotRequestOptimizeStrategyModel;

@interface AWEConcernYellowDotRequestOptimizeInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *yellowPointSourceType;
@property (retain, nonatomic) AWEConcernYellowDotRequestOptimizeStrategyModel *optimizeStrategyHitInfo;

+ (id)optimizeStrategyHitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)convertToJsonString;
- (void).cxx_destruct;

@end
