@class NSArray;

@interface AWECodeGenAdShowStrategyModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *adEpisodeShowStyleDetailsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
