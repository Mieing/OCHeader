@class NSString, NSArray;

@interface AWECodeGenPanelModuleModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *moduleId;
@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *moduleTitle;
@property (copy, nonatomic) NSString *moduleDesc;
@property (copy, nonatomic) NSArray *moduleItemsModelArray;
@property (copy, nonatomic) NSString *extra;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
