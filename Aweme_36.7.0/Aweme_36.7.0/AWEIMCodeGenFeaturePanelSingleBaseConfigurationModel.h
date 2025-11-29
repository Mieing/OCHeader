@class NSArray;

@interface AWEIMCodeGenFeaturePanelSingleBaseConfigurationModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *itemsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
