@class NSArray, NSString;

@interface AWECodeGenPostRecommendModuleModel : AWEBaseDataModel

@property (nonatomic) int postType;
@property (copy, nonatomic) NSArray *headerInfoModelArray;
@property (copy, nonatomic) NSArray *awemeListModelArray;
@property (copy, nonatomic) NSString *extra;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
