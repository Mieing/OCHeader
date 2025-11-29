@class NSArray;

@interface AWEIMCodeGenPublicGroupCreateInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *sectionListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
