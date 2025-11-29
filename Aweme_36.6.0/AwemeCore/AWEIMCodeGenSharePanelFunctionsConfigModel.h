@class NSArray;

@interface AWEIMCodeGenSharePanelFunctionsConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *funcConfigModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)modelContainerPropertyGenericClass;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
