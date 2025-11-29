@class NSArray;

@interface AWEIMCodeGenFeaturePanelApplyGroupModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *basesArray;
@property (copy, nonatomic) NSArray *itemsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
