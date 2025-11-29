@class NSArray;

@interface AWECodeGenUserComponentInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *componentPunishInfoListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
