@class NSString, NSArray;

@interface AWEIMCodeGenFeaturePanelActiveAnimationModel : AWEBaseDataModel

@property (nonatomic) int kind;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *resourceKey;
@property (copy, nonatomic) NSArray *frequencyItemsModelArray;
@property (nonatomic) float priority;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
