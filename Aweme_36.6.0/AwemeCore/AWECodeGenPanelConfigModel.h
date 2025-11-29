@class NSArray, NSString;

@interface AWECodeGenPanelConfigModel : AWEBaseDataModel

@property (nonatomic) long long configType;
@property (copy, nonatomic) NSArray *panelModulesModelArray;
@property (copy, nonatomic) NSString *hostguesttype;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
