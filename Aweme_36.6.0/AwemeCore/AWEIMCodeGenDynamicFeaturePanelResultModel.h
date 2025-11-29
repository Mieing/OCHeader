@class NSArray;

@interface AWEIMCodeGenDynamicFeaturePanelResultModel : AWEBaseDataModel

@property (nonatomic) BOOL isError;
@property (copy, nonatomic) NSArray *itemListModelArray;
@property (nonatomic) BOOL replaceAll;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
