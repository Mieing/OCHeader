@class NSArray;

@interface AWECodeGenAnchorDisplayStrategyModel : AWEBaseDataModel

@property (nonatomic) int descSuffixStrategy;
@property (copy, nonatomic) NSArray *displayControlInfoModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
