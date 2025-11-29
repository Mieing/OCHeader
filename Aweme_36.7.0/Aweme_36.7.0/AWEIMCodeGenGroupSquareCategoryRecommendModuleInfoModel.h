@class NSArray, NSString, NSDictionary;

@interface AWEIMCodeGenGroupSquareCategoryRecommendModuleInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *categoryListModelArray;
@property (copy, nonatomic) NSString *defaultCategoryId;
@property (copy, nonatomic) NSArray *groupListModelArray;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *trackingExt;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
