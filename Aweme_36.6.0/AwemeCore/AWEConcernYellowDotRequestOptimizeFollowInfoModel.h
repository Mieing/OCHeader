@class NSString, AWEConcernYellowDotRequestOptimizeStrategyModel;

@interface AWEConcernYellowDotRequestOptimizeFollowInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *followYellowPointSourceType;
@property (retain, nonatomic) AWEConcernYellowDotRequestOptimizeStrategyModel *optimizeStrategyHitInfo;

+ (id)optimizeStrategyHitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
